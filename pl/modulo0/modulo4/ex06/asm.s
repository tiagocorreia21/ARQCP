# int test_different(char *a, char *b)
# a -> %rdi
# b -> %rsi

.section .text
 .global test_different

test_different:

    cmpb $0, (%rdi)     # *a == '\0' ???
    je end

    cmpb $0, (%rsi)     # *b == '\0' ???
    je end

    movb %dil, %dl      # copy *a

    cmpb %dl, (%rsi)    # *a == *b ???
    je next

    movl $1, %eax       # different strings

    ret

next:

    addb $1, %dil       # a++

    addb $1, %sil       # b++

    jmp test_different

end:
    movl $0, %eax      # equal strings
    ret
