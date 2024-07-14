BITS 64

GLOBAL expr_eval:function, expr_prepare:function, expr_clean:function
GLOBAL text:data 8
EXTERN _GLOBAL_OFFSET_TABLE_, malloc, expr_create, expr_destroy, printf
;EXTERN expr_eval_placeholder, expr_eval_one

SECTION .text


$expr_prepare:

    mov rsi, _GLOBAL_OFFSET_TABLE_
    mov rsi, [rsi + text wrt ..got ]
    mov rdi, [rsi]

    push rsi

        call expr_create wrt ..plt
        mov [rel ex], rax

    pop rsi

ret


expr_clean:

    push rbx
        mov rdi, [rel ex]
        call expr_destroy wrt ..plt
    pop rbx
ret


eval_one:

    ;call debug

        ; rdi -> res
        ; rsi -> expr
        ; rdx -> vars
    ;ret

    mov rax, 0
    mov eax, [rsi]        ;kind
    ;call debug



    .here:
    lea rcx, [rel .here]
    ;call debug
    ;mov r8, rcx
    ;add rcx, [rel .switch]
    ;sub rcx,  [rel .here]
    ;add rcx, [rcx + 8*rax]
    add rcx, [rcx + 8*rax + (.switch - .here)]
        ;call debug
    jmp rcx

    .switch:
    dq .case_0 - .here
    dq .case_1 - .here
    dq .case_2 - .here
    dq .case_3 - .here
    dq .case_4 - .here
    dq .case_5 - .here
    dq .case_6 - .here
    dq .case_7 - .here


    .case_0:        ; CONST
        mov rax, [rsi+8]    ; constant
        mov dword [rdi], eax
    jmp .end

    .case_1:        ; VAR
        mov rax, 0
        mov al, byte [rsi+8]    ; variable
        lea rax, [rax*4]
        mov eax, [rdx+rax]
        mov [rdi], eax;
    jmp .end

    .case_2:        ; PLUS
        mov rsi, [rsi+8]        ; inner
        call eval_one
    jmp .end

    .case_3:        ; MINUS
        mov rsi, [rsi+8]        ; inner
        call eval_one

        mov eax, [rdi]
        imul eax, -1
        mov [rdi], eax
    jmp .end

    .case_4:        ; ADD
        push rsi
            mov rsi, [rsi+8]        ; left
            call eval_one
        pop rsi
        mov rsi, [rsi+16]
        mov rax, 0
        mov eax, [rdi]
        push rax
        ;push qword [rdi]
            call eval_one
        pop rax
        add eax, [rdi]
        mov [rdi], eax
    jmp .end

    .case_5:        ; SUB
        push rsi
            mov rsi, [rsi+8]        ; left
            call eval_one
        pop rsi
        mov rsi, [rsi+16]
        push qword [rdi]
            call eval_one
        pop rax
        sub eax, [rdi]
        mov [rdi], eax
    jmp .end

    .case_6:        ; MIN
        push rsi
            mov rsi, [rsi+8]        ; left
            call eval_one
        pop rsi
        mov rsi, [rsi+16]
        push qword [rdi]
            call eval_one
        pop rax
        cmp eax, [rdi]
        jge .end
        mov [rdi], eax
    jmp .end

    .case_7:        ; MAX
        push rsi
            mov rsi, [rsi+8]        ; left
            call eval_one
        pop rsi
        mov rsi, [rsi+16]
        push qword [rdi]
            call eval_one
        pop rax
        cmp eax, [rdi]
        jle .end
        mov [rdi], eax
    jmp .end

    .end:

ret


deb: db "DEBUG", 10
debug:

    push rax
    push rdi
    push rsi
    push rdx
    push rcx

    mov rax, 1
    mov rdi, 1
    mov rsi, deb
    mov rdx, 6
    syscall

    pop rcx
    pop rdx
    pop rsi
    pop rdi
    pop rax

ret

expr_eval:
    ;rdi -- rows
    ;rsi -- cols
    ;rdx -- int const * data
                                ;rdi                ;rsi                ;rdx                    ;rcx
    ;int * expr_eval_placeholder(struct expr * expr, unsigned long rows, unsigned long cols, int const * data) {

                                    ;rdi
    ;struct expr * expr_create(char const * text) {

    mov [rel rows], rdi         ; rows
    mov [rel cols], rsi         ; cols
    mov [rel data], rdx        ; data

    shl rdi, 2
    push rbx
        call malloc wrt ..plt
    pop rbx
    mov [rel res], rax


    mov r8, 0
    mov r9, [rel data]
    .for:
        mov rdi, [rel res]
        lea rdi, [rdi+r8*4]
        mov rsi, [rel ex]
        mov rdx, r9

        add r9, [rel cols]
        add r9, [rel cols]
        add r9, [rel cols]
        add r9, [rel cols]

        call eval_one


        inc r8
        cmp r8, [rel rows]
    jl .for

    mov rax, [rel res]


ret



SECTION .bss
text: resq 1
ex: resq 1

rows: resq 1
cols: resq 1
data: resq 1
res: resq 1

