#include<stdio.h>

int add(int x, int y){
return x+y;
}

int reduceBy(int i, int x){
	
	return i-x;
}
int divide(int x, int y){
	if(x!=0)
	return (float)y/x;
	else
	return printf("ERROR!! Division By Zero \n ");
} 
int average(int x, int y){
	return (float)add(x,y)/2;

}


int main()
{	
	int x,y;
	printf("Enter two numbers:  \n");
	scanf("%i",&x);
	scanf("%i",&y);
	printf("sum = %i \n  %i reducedBy %i = %i \n divide = %i \n ",add(x,y),y,x,reduceBy(y,x),divide(x,y));
	printf("Average = %i \n", average(y,x));
return 0;


}
