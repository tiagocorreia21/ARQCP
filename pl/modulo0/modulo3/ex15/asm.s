# int sum_third_byte(long* ptr, int num)
# ptr -> %rdi
# num -> %rsi

.section .text
 .global sum_third_byte

sum_third_byte:

    movl $0, %eax          # result

ciclo:

    cmp $0, %rsi           # num == 0 ???
    je end

    addl 2(%rdi), %eax

    addq $8, %rdi          # ptr++ 

    decl %esi              # num--

    jmp ciclo

end:
    ret
