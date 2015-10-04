//これは一般的ではない
/* #include <stdio.h> */

/* void func(int [10]); */

/* int main(void){ */
	
/* 	int figure[10]={1,2,3,4,5,6,7,8,9,10}; */

/* 	func(figure); */

/* 	return 0; */

/* } */

/* void func(int temp[10]){ */

/* 	for(int i=0;i<10;++i){ */
/* 		printf("%d\n",temp[i]); */
/* 	} */
/* } */


#include <stdio.h>

void func(int*);

int main(void){
	
	int figure[10]={1,2,3,4,5,6,7,8,9,10};

	func(figure);

	return 0;

}

void func(int *temp){

	for(int i=0;i<10;++i){
		printf("%d\n",temp[i]);
	}
}
