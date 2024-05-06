; boot.asm

section .text
    global _start

_start:
    ; Завантаження ядра з сектора 2
    mov ax, 0x0200
    mov es, ax
    xor bx, bx
    mov ah, 0x02
    mov al, 0x01
    mov ch, 0x00
    mov dh, 0x00
    mov cl, 0x02
    int 0x13

    ; Перехід до ядра
    jmp 0x0000:0x2000
