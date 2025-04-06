# void keep_positives(int* ptr, int num)
# ptr -> %rdi
# num -> %rsi
# index -> %rdx

.section .text
 .global keep_positives

keep_positives:

    movq $0, %rdx

ciclo:

    cmpl %esi, %edx       # num == index ??
    je end

    cmpl $0, (%rdi, %rdx, 4)   #  < 0 ??
    jge next                   # >  0 ??

    movl %edx, (%rdi, %rdx, 4)  # *(ptr + index) = index

next:

    incq %rdx

    jmp ciclo

end:
    ret
