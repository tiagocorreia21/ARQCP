.section .data
 .global num

.section .text
 .global steps

steps:

    movq num(%rip), %rax

    movq %rax, %rsi

    movq $3, %rdi

    cmpq $0, %rdi
    jmp end

    divq %rdi

    addq $6, %rax

    mulq %rdi

    addq $12, %rax

    subq %rsi, %rax

    subq $4, %rax

    ret
 
 end:
    
    ret