# Learn C

## Resource
- 「你所不知道的 C 語言」系列講座 —— jserv
  - https://hackmd.io/@sysprog/c-programming

## Famous Quotes
- 「C 很彆扭又缺陷重重，卻異常成功。固然有歷史的巧合推波助瀾，可也的確是因為它能滿足於系統軟體實作的程式語言期待：既有相當的效率來取代組合語言，又可充分達到抽象且流暢，能用於描述在多樣環境的演算法。」 —— Dennis M. Ritchie

## Note
- C Standard 要求 main 函數必須這樣寫
    ```
    int main(void) { /* ... */};
    ```
    or
    ```
    int main(int argc, char *argv[]) { /* ... */ };
    ```
    DO NOT
    ```
    void main()
    ```
    - 最後的 return 0，是可以省略的，main 最後如果沒有 return，會自動 return 0，但是，只有 main 函数是這樣，其他函數不能省略 return。