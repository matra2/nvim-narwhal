
;BITS 64
;use16
default abs
segment .ala align=45 exec nowrite

; comment

label:
.mega.~~@weird94$label:
?other:

kaddd  k1,k2,k3

rep ret
repne scasb
lock add qword rax, qword [rsp+3]
a32 lodsb

bnd ret


mov rax, 0200d
mov rax, 0b10__0_1
dw 'a', "a", `a`, 'ala', "a,a"
dw -0.4, 0x1p+32, 1_3.e+32_43


bndstx [rax+0x3,rbx], bnd0
mov rax, [rel abs label]
VDIVPS zmm4, zmm31, zword [rbx]


push 10 ? -21 : 37
push 0xb * (0xa // 0xb) + (0xa %% 0xb) = 0xa
push +(-( !3 ))
push !( 1>>>3 %% 4) <=> 0 <> ~2 ^^ +( 4 // -1)


label2: equ $-label
times 1*(2+3) inc al
times ($-$$)//2 ret

%define ereg(foo,) e %+ foo
%idefine xyzzy(=expr,&val,=hex/x) expr, str, hex
%ixdefine aaa(=!?./o) ?.
%undef foo16
%assign i 20-2&1


fadd st7
addpd xmm0, xmm15
vaddpd ymm0, ymm15
PCMPEQB MM1, qword MM2
