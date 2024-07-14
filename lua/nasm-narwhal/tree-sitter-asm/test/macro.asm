
%define ctrl 0x1F & 'D'
%define param(a,b) ((a)+(a)*(b))
mov byte [param(2,ebx)], ctrl

;%define a(x) 1+b(x)

%define foo (a,b) ; no arguments, (a,b) is the expansion
%define bar(a,b) ; two arguments, empty expansion
%define ereg(foo,) e %+ foo

%define ?fo..@(x, y) x+y*10
mov eax, ?fo..@(2-2,'a')

%idefine xyzzy(=expr,&val,=hex/x) expr, str, hex

%ixdefine aaa(=!?./o) ?.
push aaa (21)

%idefine foo16 1
;mov ax,Foo%[__?BITS?__] ; The Foo value

;%imacro Foo 0
    ;mov %?,%??
;%endmacro
%undef foo16

%assign i 20-2&1
