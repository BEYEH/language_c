<!-- omit in toc -->
# Language C - Note

<!-- omit in toc -->
## Table of contents

- [Type of Variables](#type-of-variables)
- [Memory Address](#memory-address)
- [Pointer](#pointer)
- [Array](#array)
- [Function](#function)
- [Object](#object)
- [Standard Library](#standard-library)

## Type of Variables

- Basic Data Types
  - int (2 or 4 bytes)
    - %d
  - float (4 bytes)
    - %f
  - double (8 bytes)
    - %lf
  - char (1 byte)
    - %c
- Other
  - string
    - %s

## Memory Address

- & 不要都念成 and，涉及指標操作的時候，要讀為 "address of" 。

## Pointer

- 沒有「雙指標」只有「指標的指標」，在中文裡，兩者個意思完全迥異。
  - 雙 : 有「對稱」且「獨立」的意含，
  - x的x : 由單一個體關聯到另一個體的對應。

- C 語言中，萬物皆是數值 (everything is a value)，函式呼叫當然只有 call-by-value。「指標的指標」(英文就是 a pointer of a pointer) 是個常見用來改變「傳入變數原始數值」的技巧。

- Array, function, and pointer types are collectively called derived declarator types. A declarator type derivation from a type T is the construction of a derived declarator type from T by the application of an array-type, a function-type, or a pointer-type derivation to T.
  - 貌似三個不相關的術語「陣列」、「函式」，及「指標」都歸類為 derived declarator types。

- Pointers vs. Arrays
  - In declaration
    - 不能變更為 pointer 的形式
      1. extern, 如 extern char x[];
      2. definition/statement, 如 char x[10]
    - 可變更為 pointer 的形式
      1. func(char *x)
  - In expression
    - pointer 與 array 可互換

## Array

- 1D Array 的 []， 例如 x[i]，[] 是一種語法糖 (syntax sugar)，比較好寫，編譯時將被編譯器改寫為 *(x + i) 。2D array 的 [][] 也是語法糖，C 最後仍然透過轉換轉成 1D 的位址做操作(透過指標的方法做降維)。

- 根據你使用的地方不同，Array 會有不同的意義：
  - 如果是用在 expression，array 永遠會被轉成一個 pointer。
  - 用在 function argument 以外的 declaration 中它還是一個 array，而且「不能」被改寫成 pointer。
  - function argument 中的 array 會被轉成 pointer。

## Function

- C Standard 要求 main 函數必須這樣寫

  ``` c
  int main(void) { /* ... */};
  ```

  or

  ``` c
  int main(int argc, char *argv[]) { /* ... */ };
  ```

  - 最後的 return 0，是可以省略的，main 最後如果沒有 return，會自動 return 0，但是，只有 main 函数是這樣，其他函數不能省略 return。
  
  DO NOT

  ``` c
  void main()
  ```

- 為何 C 語言標準函式庫裡頭的函式名稱如此簡短？
  - Translation limits 6 significant initial characters in an external identifier. (最初連結器有 6 到 8 個字元的輸入限制。)

- 在 C 語言中，"function" 隱含一個狀態到另一個狀態的關聯，而並非數學意義上的函數，因此我們將一般的 C function 翻譯為「函式」。

- Parameter vs. Argument
  - Parameter (formal parameter) : 在函式宣告 (declaration) 與定義 (definition) 時。
  - Argument (actual argument) : 呼叫函式時。

## Object

- 在 C 語言的物件就指在執行時期，資料儲存的區域，可以明確表示數值的內容。

## Standard Library

- 在 C17 中，NULL 的定義通常是標準頭文件 stddef.h 中的 #define NULL ((void *)0)。這表示在 C17 中，NULL 被定義為一個空指標（void 指標），其值是 0。

    ``` c
    #ifndef __cplusplus
    #define NULL ((void *)0)
    #else
    #define NULL 0
    #endif
    ```
