#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int c, num=0; //reset
	
	printf("input a string : ");
	scanf("%c", &c);
	
	while((c= getchar()) != '\n')
	 {
	 	if(c>='0'&& c<='9')
	 	 num++;
	 	 
	 }
	
	printf("the number of digits is %i\n",num);
	
	return 0;
}
