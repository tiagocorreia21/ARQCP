# int vec_sum(int* ptr, short num)
# ptr -> %rdi
# num -> %rsi

# int vec_avg(int* ptr, short num)
# ptr -> %rdi
# num -> %rsi 

.section .text
.global vec_sum
.global vec_avg

vec_sum:

    pushq %rbp

    movq %rsp, %rbp

    pushq %rsi

    pushq %rdi

    movl $0, %eax

ciclo:

    cmpq $0, %rsi
    je fim

    addl (%rdi), %eax

    decq %rsi
    addq $4, %rdi

    jmp ciclo

fim:

    popq %rdi
    popq %rsi

    movq %rbp, %rsp

    popq %rbp

    ret

vec_avg:
    
    pushq %rbp
    
    movq %rsp, %rbp
    
    pushq %rsi

    call vec_sum

    popq %rsi
    
    testq %rsi, %rsi
    je erro

    cqto
    idivq %rsi

    movq %rbp, %rsp
    popq %rbp

    ret

erro:
    movl $-1, %eax  # Retorna -1 para indicar erro
    movq %rbp, %rsp
    popq %rbp

    ret
