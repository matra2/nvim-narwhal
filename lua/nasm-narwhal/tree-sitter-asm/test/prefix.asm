BITS 64
rep ret
repne scasb
lock add rax, 1
a32 lodsb
