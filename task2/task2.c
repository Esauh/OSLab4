#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exitProgram (int a, int b);


int (*operation[4]) (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int o;
	int a;
	int b;

	
	operation[0] = &add; 

  operation[1] = &subtract; 
  operation[2] = &multiply; 
  operation[3] = &divide; 
  operation[4] = &exitProgram; 

	while (o!=4) {
		
		printf( "Enter an integer: ");
		scanf("%d",&a);

		printf( "Enter an integer: ");
		scanf("%d",&b);

		printf( "Enter an integer 0 - 4: ");
		scanf("%d",&o);

		printf("%d\n", operation[o](a,b));
  }
	
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) 
{printf("%d + %d = ",a,b); 
return a + b;
}
int subtract (int a, int b) {printf("%d - %d = ",a,b); return b - a;}
int multiply (int a, int b) {printf("%d * %d = ",a,b); return a * b;}
int divide (int a, int b) {printf("%d / %d = ",a,b); return a / b;}
int exitProgram(int a,  int b) {printf("Exiting the program Bye! "); return 0;}
