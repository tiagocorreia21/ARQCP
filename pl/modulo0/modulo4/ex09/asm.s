# int calculate(int a, int b)
# a -> %rdi
# b -> %rsi

.section .text
 .global calculate

calculate:
   
    pushq %rbp             # prologue
    movq %rsp, %rbp

    subq $16, %rsp         # allocate 16 bytes for local variables

    movq %rdi, -8(%rbp)    # diff = a    

    subq %rsi, -8(%rbp)    # diff = a - b

    movq %rdi, %rax        # place multiplier

    imulq %rsi              # a * b

    movq %rax, -16(%rbp)   # product = a * b

    movq -8(%rbp), %rax    # res = (a-b)

    subq -16(%rbp), %rax   # res = (a-b) - (a*b)
    
    movq %rbp, %rsp        # epilogue
    popq %rbp

    ret
