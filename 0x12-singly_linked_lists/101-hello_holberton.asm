global  main
extern  printf

section .DATA
format: db `Hello, Holberton\n`,0

section .TEXT
main:

mov   edi, format
xor   eax, eax
call  printf
mov     eax, 0
ret
