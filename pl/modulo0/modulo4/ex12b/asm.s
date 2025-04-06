# int count_bits_zero(long x)
# x -> %rdi

.section .text
 .global count_bits_zero

count_bits_zero:

    movl $64, %eax    # count

ciclo:

    cmpq $0, %rdi    # x == 0 ???
    je end
    jl negative_number

    shrq %rdi        # x >>

    jc one_found     # jump if last bit = 1

    jmp ciclo

one_found:

    decl %eax

    jmp ciclo

negative_number:

    sarq %rdi

    jc one_found

end:
    ret
