int main(){

    int c = 123;
    int *d;

    d = &c;
    printf("%d\n", *d);


    

    int a[2] = {111, 222};
    int b[2] = {777, 888};

    printf("%d\n", 1[a]);

    //b�ϥݥ��󥿷��Ǥ��뤬�ݥ����ѿ��ǤϤʤ��Τǥ��顼
    b = &(a[0]);
    printf("%d\n", b[1]);

}

