# Learn C


## Resource
- 「你所不知道的 C 語言」系列講座 —— jserv
  - https://hackmd.io/@sysprog/c-programming


## Famous Quotes
- 「C 很彆扭又缺陷重重，卻異常成功。固然有歷史的巧合推波助瀾，可也的確是因為它能滿足於系統軟體實作的程式語言期待：既有相當的效率來取代組合語言，又可充分達到抽象且流暢，能用於描述在多樣環境的演算法。」 —— Dennis M. Ritchie
- 「溯源能力是很重要的，才不會被狀似革新，實則舊瓶裝新酒或跨領域借用的『新觀念』所迷惑。」 —— 葉秉哲博士
- 「學會了 GDB，我有種山頂洞人學會用火的感動」 —— 張至


## Note
- C Standard 要求 main 函數必須這樣寫
    ```
    int main(void) { /* ... */};
    ```
    or
    ```
    int main(int argc, char *argv[]) { /* ... */ };
    ```
    - 最後的 return 0，是可以省略的，main 最後如果沒有 return，會自動 return 0，但是，只有 main 函数是這樣，其他函數不能省略 return。
    
    DO NOT
    ```
    void main()
    ```
- & 不要都念成 and，涉及指標操作的時候，要讀為 "address of" 。
- 為何 C 語言標準函式庫裡頭的函式名稱如此簡短？
  - Translation limits 6 significant initial characters in an external identifier. (最初連結器有 6 到 8 個字元的輸入限制。)
- 在 C 語言的物件就指在執行時期，資料儲存的區域，可以明確表示數值的內容。
- 沒有「雙指標」只有「指標的指標」。
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
- 1D Array 的 []， 例如 x[i]，[] 是一種語法糖 (syntax sugar)，比較好寫，編譯時將被編譯器改寫為 *(x + i) 。2D array 的 [][] 也是語法糖，C 最後仍然透過轉換轉成 1D 的位址做操作(透過指標的方法做降維)。
- 根據你使用的地方不同，Array 會有不同的意義：
  - 如果是用在 expression，array 永遠會被轉成一個 pointer。
  - 用在 function argument 以外的 declaration 中它還是一個 array，而且「不能」被改寫成 pointer。
  - function argument 中的 array 會被轉成 pointer。


## Exercise
- 設定絕對地址為 0x67a9 的 32-bit 整數變數的值為 0xaa6，該如何寫？
    ```
    *(int32_t * const) (0x67a9) = 0xaa6; 
    ```
    要先把 0x67a9 轉型成指標，再用 *取值 做更改。