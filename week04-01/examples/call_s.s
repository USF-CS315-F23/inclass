.global foo_s

bar_s:
    addi a0, a0, 1
    ret

foo_s:
    addi sp, sp, -8  # allocate 8 bytes (ptr value)
    sd ra, (sp)      # preserve ra

    call bar_s       # ra = PC + 4
    addi a0, a0, 1

    ld ra, (sp)      # restore ra
    addi sp, sp, 8   # deallocate 8 bytes
    ret
