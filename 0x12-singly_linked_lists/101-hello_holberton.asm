section .data
    hello db "Hello, Holberton",0
    fmt db "%s",0

section .text
    global _start

_start:
    ; Call printf
    mov rdi, fmt
    mov rsi, hello
    mov rax, 0
    call printf

    ; Exit
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall
