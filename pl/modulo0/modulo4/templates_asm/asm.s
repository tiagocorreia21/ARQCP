#

.section .text
 .global

func:

    pushq %rbp             # prologue
    movq %rsp, %rbp

    

    movq %rbp, %rsp        # epilogue
    popq %rbp

    ret