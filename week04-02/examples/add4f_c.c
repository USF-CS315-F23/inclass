int add2_c(int a, int b) {
    return a + b;
}

int add4f_c(int a, int b, int c, int d) {
    //return add2_c(add2_c(a, b), add2_c(c, d));

    int tmp0, tmp1, tmp2;

    tmp0 = add2_c(a, b);
    tmp1 = add2_c(c, d);
    tmp2 = add2_c(tmp0, tmp1);

    return tmp2;
}
