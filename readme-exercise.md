<!-- omit in toc -->
# Language C - Exercise

<!-- omit in toc -->
## Table of contents

- [Memory Address](#memory-address)

## Memory Address

- 設定絕對地址為 0x67a9 的 32-bit 整數變數的值為 0xaa6，該如何寫？

    ``` c
    *(int32_t * const) (0x67a9) = 0xaa6; 
    ```

    要先把 0x67a9 轉型成指標，再用 *取值 做更改
