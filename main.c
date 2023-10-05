#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dap=77;
	int num;
	int trial = 0;
	
	
	do
	{
	printf("Guess a number :");
	scanf("%d", &num);
	
	if(num>dap)	
	 printf("High!\n");
	
	else if(num<dap)
	 printf("Low!\n");
	
	trial = trial + 1;
	}
	while(num != dap);
	
	printf("Congratulation! trials:%d",trial);

	
	return 0;
}
