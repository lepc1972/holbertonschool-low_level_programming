global main

        section .text


main:   mov eax, 0x04
        mov ebx, 1
        mov ecx, message
        mov edx, message_length
        int 0x80
        mov eax, 0x01
        mov ebx, 0
        int 0x80

        section .data
        message: db "Hello, Holberton", 0xA
        message_length equ $-message
