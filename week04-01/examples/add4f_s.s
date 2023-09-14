.global add4f_s
.global add2_s

# Add two args
#
# a0 - int a
# a1 - int b
add2_s:
    add a0, a0, a1
    ret

# Add four args
#
# a0 - int a
# a1 - int b
# a2 - int c
# a3 - int d

# s0 - int tmp0

add4f_s:
    addi sp, sp, -32
    sd ra, (sp)      # Preserve ra

    # a0 and a1 already set

    sd a2, 8(sp)     # Preserve a2 (c)
    sd a3, 16(sp)    # Preserve a3 (d)

    call add2_s      # add2_c(a, b)

    sd a0, 24(sp)    # Preserve a0 (tmp0)
    
    ld a0, 8(sp)     # Restore a2 into a0
    ld a1, 16(sp)    # Restore a3 into a1

    call add2_s      # add2_c(c, d)

    mv a1, a0        # a1 (tmp1) = a0
    ld a0, 24(sp)    # Restore tmp0 into a0

    call add2_s      # add2_c(tmp0, tmp1)

    ld ra, (sp)
    addi sp, sp, 32
    ret

    
