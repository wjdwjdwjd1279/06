#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int c = a + b;
	return c;
}

int square(int n)
{
	return n*n;
}

int get_max(int x, int y)
{
	if (x>y);
		return x;
		
	return y;
}
	
int main(int argc, char *argv[]) 
{
	int a, b;
	a=3;
	b=10;
	
	printf("sumTwo result : %i\n", sumTwo(a,b));
	printf("square result : %i\n", square(a));
	printf("ger_max result : %i\n", get_max(a,b));
	
	return 0;
}