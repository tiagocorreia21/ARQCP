# void swap(char* ptr1, char* ptr2, int num);
# ptr1 -> %rdi
# ptr2 -> %rsi
# num -> %rdx

.section .text
 .global swap

swap:

    cmp $0, %rdx              # num == 0 ???
    je end

    movb (%rdi), %cl         

    movb (%rsi), %al

    movb %al, (%rdi)

    movb %cl, (%rsi)

    addq $1, %rdi            # ptr1++

    addq $1, %rsi            # ptr2++

    decq %rdx                # num--

    jmp swap

end:
    ret
