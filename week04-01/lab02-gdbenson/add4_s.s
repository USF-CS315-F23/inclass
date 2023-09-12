.global add4_s

# a0 - int a
# a1 - int b
# a2 - int c
# a3 - int d

add4_s:
    add a0, a0, a1  # a0 = a + b
    add a0, a0, a2  # a0 = a0 + c
    add a0, a0, a3  # a0 = a0 + d
    ret
