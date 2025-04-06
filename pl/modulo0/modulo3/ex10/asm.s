# void str_cat(char* ptr1, char* ptr2, char* ptr3)
# ptr1 -> %rdi
# ptr2 -> %rsi
# ptr3 -> %rdx

.section .text
 .global str_cat       

str_cat:
    movq $40, %rcx          # max lenght

copy_str1:

    cmpq $0, %rcx            
    je   copy_str2

    cmpb $0, (%rdi)
    je   copy_str2
    
    movb (%rdi), %al 
    movb %al, (%rdx)
    
    incq %rdi
    incq %rdx
    
    decq %rcx
    
    jmp copy_str1

copy_str2:
    movq $40, %rcx

copy_str2_loop:
    
    cmpq $0, %rcx
    je end
    
    cmpb $0, (%rsi)
    je  end
    
    movb (%rsi), %al
    movb %al, (%rdx)
    
    incq %rsi                   # ptr2++
    incq %rdx                   # ptr3++
    
    decq %rcx
    
    jmp copy_str2_loop

end:
    movb $0, (%rdx)
    ret
