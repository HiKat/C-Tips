#include <stdio.h>

void func(int x){
    x = 777;
}


//配列ではこれは不可能
void func2(int *y){
    *y =  9999;
}

int main(){
    int a = 111;
    func(a);
    printf("%d\n", a);

    int b = 333;
    printf("%d\n", b);
    func2(&b);
    printf("%d\n", b);
}










