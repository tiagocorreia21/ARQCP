# int count_even(short *vec, int n)
# vec -> %rdi
# n   -> %rsi

.section .text
 .global count_even

count_even:
    movl $0, %ecx       # count

    pushq %rbx          

    movq $2, %rbx       # divisor

ciclo:
    
    cmpq $0, %rsi       # n == 0 ???
    je end

    movq (%rdi), %rax   # divident

    idiv %rbx           # *vec / 2

    cmpq $0, %rdx       # rest == 0 ??
    je even_found

    incl %ecx           # count++
 
    addq $1, %rdi       # vec++

    decq %rsi           # n--

    jmp ciclo

even_found:

    incl %ecx          # count++

    addq $1, %rdi      # vec++

    decq %rsi          # n--

    jmp ciclo

end:
    popq %rbx
    movl %ecx, %eax   # return = count
    ret
