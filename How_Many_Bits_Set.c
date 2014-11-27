#include <stdio.h>

int main(void){
	int val;
	unsigned int count = 0;
	
	printf("Please input a value:\n");
	scanf("%d", &val);

	while(val){
		val &= (val - 1);	//clear the least(right) significant bit to 0
		printf("val = %d\n", val);
		count++;
	}

	printf("have %d bit is one\n", count);

	return 0;
}
