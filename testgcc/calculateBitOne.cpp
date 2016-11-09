#include <stdio.h>

#define BIT7 (0x1<<7)

int calculate(unsigned char c){
	int i=0;
	int count=0;
	unsigned char comp=BIT7;
	for(i;i<(sizeof(c)*8);i++){
		if((c&comp)!=0){
			count++;
		}
		comp=comp>>1;
	}
	return count;
}

int main(void){
	char c='a';
	int count=0;
	count=calculate(c);
	printf("count:%d\n",count);
	return 0;
}
