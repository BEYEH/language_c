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