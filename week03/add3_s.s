.global add3_s

# a0 - int a
# a1 - int b
# a2 - int c

add3_s:
    add a0, a0, a1
    add a0, a0, a2
    ret
