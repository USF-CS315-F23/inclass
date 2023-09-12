.global foo_s

# a0 - int a

bar_s:
    addi a0, a0, 1
    ret

# a0 - int a

foo_s:
    addi sp, sp, -8
    sd ra, (sp)

    call bar_s
    addi a0, a0, 1    

    ld ra, (sp)
    addi sp, sp, 8
    ret
