# int sort_without_reps(short* ptrsrc, short* ptrdest, int num);
# ptrsrc -> %rdi
# ptrdest -> %rsi
# num -> %rdx

.section .text
 .global sort_without_reps

sort_without_reps:
    
    cmpl $0, %rdx
    je end

    

end:
    ret
