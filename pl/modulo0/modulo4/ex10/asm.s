# int decr(short *p1, char val);

.section .text
 .global decr

call_decr:

    pushq %rbp             # prologue
    movq %rsp, %rbp

    

    movq %rbp, %rsp        # epilogue
    popq %rbp

    ret

decr:
    
