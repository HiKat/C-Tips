//����http://www.orchid.co.jp/computer/cschool/CREF/memcpy.html


#include <stdio.h>

main(){
    char src[10];
    char dst[10];
    int i1;

    for (i1 = 0; i1 < 10; i1++)
        {
            src[i1] = i1;
        }

    printf("1.");
    for (i1 = 0; i1 < 10; i1++)
        {
            printf("[%d]", src[i1]);
        }
    printf("\n2.");

    //dst�Ϥ��Ǥ�������ǥ������ΰ褬���ݤ���Ƥ���
    memcpy(dst, src, 10);

    for (i1 = 0; i1 < 10; i1++)
        {
            printf("[%d]", dst[i1]);
        }
}
