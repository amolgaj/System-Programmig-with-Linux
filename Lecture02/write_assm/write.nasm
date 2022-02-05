global main

Section .data 
msg: db "This is Amol",0Ah,0h,
len_msg: equ $ - msg

Section .text
main:
 mov rax,1
 mov rdi,1
 mov rsi,msg
 mov rdx,len_msg
syscall        ; write(1,msg,len_msg);
mov r15, rax
 mov rax,60
 mov rdi,r15
 syscall    ;exit(49)
 
