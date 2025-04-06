# short greatest(short a, short b, short c);
# a -> %rdi
# b -> %rsi
# c -> %rdx

.section .text
 .global greatest

greatest:

    cmpw %di, %si           # a > b  ???
    jg a_greater_b
    jl b_greater_than_a

a_greater_b:

    cmpw %di, %dx           # a > c ???
    jg a_greater

b_greater_than_a:

    cmpw %si, %dx          # b > c ???
    jg b_greatest

a_greater:

    movw %di, %ax
    ret

b_greatest:

    movw %si, %ax
    ret

c_greatest:

    movw %dx, %ax
    ret

