# int vec_count_bits_zero(int *ptr, int num)
# ptr -> %rdi
# num -> %rsi

.section .text
 .global vec_count_bits_zero

vec_count_bits_zero:

    movq $0, %rax          # count

loop_vec:

    cmpl $0, %esi          # x == 0 ???
    je end

loop_element:

    cmpl $0, (%rdi)        # *ptr == 0 ???
    je next_element

    sarq $1, (%rdi)        # x >>
    jc one_found           # jump if last bit was 1

    jmp loop_element

next_element:

    addq $4, %rdi          # ptr++

    decl %esi              # num--

    jmp loop_vec

one_found:

    incq %rax              # count++

    addq $4, %rdi          # ptr++

    decl %esi              # num--

    jmp loop_vec

end:
    ret
