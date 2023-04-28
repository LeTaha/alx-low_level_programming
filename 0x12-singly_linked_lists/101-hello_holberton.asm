section .data
    message db "Hello, Holberton", 0x0a, 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; prepare arguments for printf
    lea rdi, [message]
    xor eax, eax

    ; call printf
    call printf

    ; restore stack and exit
    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

