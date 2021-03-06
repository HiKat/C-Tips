int main()
{
    int a, b;                      /* a, b は整数型変数 */
    int *p, *q;                    /* p, q は整数型を指すポインタ型変数 */
    
    printf("&a == %10p, &b == %10p, &p == %10p, &q == %10p\n", &a, &b, &p, &q);
                                   /* 変数のアドレスを表示 */
    
    p = &a;                        /* a のアドレスを p に代入 */
    q = &b;                        /* b のアドレスを q に代入 */
    *p = 3;                        /* p が指す場所にある変数（すなわち a）に 3 を代入 */
    *q = *p + 2;                   /* q が指す場所にある変数（すなわち b）に，
                                      p が指す場所にある変数（すなわち a）の値＋２を代入 */
    printf(" a == %10d,  b == %10d,  p == %10p,  q == %10p\n", a, b, p, q);
                                   /* a, b, p, q の値を表示 */

    return 0;
}
