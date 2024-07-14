

mov ax,0200d ; explicitly decimal
mov ax,0c8h ; hex
mov ax,$0c8 ; hex again: the 0 is required
mov ax,0xc8 ; hex yet again
mov ax,0q310 ; octal yet again
mov ax,11001000b ; binary
mov ax,0b1100_1000 ; same binary constant yet again
mov ax, "aa"
mov ax, `aa`

dw -0.5 ; IEEE 754r/SSE5 half precision
dd +1.222_222_222 ; underscores are permitted
dq 0x1p+32 ; 1.0x2^32 = 4 294 967 296.0
dq 1.e1_0 ; 10 000 000 000.0
dq 1.e-10 ; 0.000 000 000 1
dt 3.141592653589793238462 ; pi
do 1.e+4000 ; IEEE 754r quad precision

dt -12_345_678_901_245_678p
dt +0p33

