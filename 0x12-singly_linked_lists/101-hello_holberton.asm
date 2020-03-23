SECTION .data
msg     db      "Hello, Holberton", 10
 
SECTION .text
global  main
 
main:
 
    mov     edx, 17
    mov     ecx, msg
    mov     ebx, 1
    mov     eax, 4
    int     80h
