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

add4f_s:
    addi sp, sp, -48
    sd ra, (sp)

    sd a2, 8(sp)
    sd a3, 16(sp)
    
    call add2_s    # add2_c(a, b)

    #mv s0, a0
    sd a0, 24(sp)

    ld a0, 8(sp)
    ld a1, 16(sp)

    call add2_s    # add2_c(c, d)

    #mv s1, a0
    sd a0, 32(sp)

    ld a0, 24(sp)  # a0 = tmp0
    ld a1, 32(sp)  # a1 = tmp1
    call add2_s    # add2_c(tmp0, tmp1)

    ld ra, (sp)
    addi sp, sp, 48
    ret
