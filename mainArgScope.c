#include <stdio.h>

void func(int x){
    x = 777;
}


//配列ではこれは不可能
void func2(int *y){
    *y =  9999;
}

void func3(int 

int main(){
    int a = 111;
    func(a);
    printf("%d\n", a); //111と表示

    int b = 333;
    printf("%d\n", b); //333と表示
    func2(&b);
    printf("%d\n", b); //9999と表示
}










