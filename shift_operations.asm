section .text
    global _start 

_start:
    mov     rax, 0x12345678
    shr     rax, 8              ;8-15 bits
    and     rax, 0xff           ;rax mow holds 0x56
    mov     rax, 0x12345678     ;replace bits 8-15
    mov     rdx, 0xaa           ;rdx holds replacement field 
    mov     rbx, 0xff           ;8 bit mask
    shl     rbx, 8              ;shift but mask to align bit 8
    not     rbx                 ;rbx is inverted mask
    and     rax, rbx            ;bits 8-15 are all 0
    shl     rdx, 8              ;shift the new bits to align
    or      rax, rdx            ;rax no has 0x1234aa78

_exitPrg:
    mov     eax, 60
    mov     edi, 0
    syscall
    ret

