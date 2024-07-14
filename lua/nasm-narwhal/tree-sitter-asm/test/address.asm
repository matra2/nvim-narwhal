BITS 64
label:

mov rax, [label]
mov rax, [rel abs label +10 wrt ..got]
mov rax, [(10+rax)+rsi*2]
bndstx [rax+0x3,rbx], bnd0
VDIVPS zmm4, zmm5, zword [rbx]


