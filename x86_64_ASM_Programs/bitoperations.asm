

section .text
    global _start

_start:
    mov     rax, 0
    not     rax     ;rax == 0xffffffffffffffff
    mov     rdx, 0 
    mov     rbx, 15
    div     rbx 
                ; rax == 0x11111111111111
    not     rax ; rax == 0xeeeeeeeeeeeeee

    mov rax,0

    ;AND OPERATION
    mov     rax, 0x12345678
    mov     rbx, rax
    and     rbx, 0xf  ;0x8
    mov     rdx, 0
    mov     rcx, 16
    idiv    rcx      ;rax = 0x1234567
    and     rax, 0xf ;rax = 0x7 

    ;0R OPERATION
    mov     rax, 0x1000
    or      rax, 1      ; makes numer 0dd
    or      rax, 0xff00 ;sets bit 15-8

    mov     rax, 0

    ;Exclusive Or
    mov     rax, 0x1234567812345678
    xor     eax, eax
    mov     rax, 0x123
    xor     rax, 0xf

    call    _progExit


_progExit:
    mov     eax, 60
    mov     edi, 0
    syscall
    ret

