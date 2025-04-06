# void vec_add_three(short* ptr, int num)
# ptr -> %rdi
# num -> %rsi

.section .text
 .global vec_add_three

vec_add_three:

    cmpq $0, %rsi         # if num = 0
    je end                # jump if equal

    addw $3, (%rdi)       # adds 3 to the current value of pointed by rdi

    decq %rsi             # num--

    addq $2, %rdi         # ptr++

    jmp vec_add_three     # jumps back to cicle

end:
    ret
