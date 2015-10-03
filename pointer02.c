#include <stdio.h>

int main(){
    int a[2] = {111, 222};
    //&b¤Ï¥À¥á

    printf("%d\n", &(*a));
    printf("%d\n", &(a[0]));
    printf("%d\n", &(a[1]));

  
    return 0;
}
