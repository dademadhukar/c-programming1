#include<stdio.h>
//null pointer
int main (){
{
	int  a=NULL,ptr;
	int *ptrt=&a;
	printf(" value %d\n",*ptrt);
	printf(" result %d\n",ptrt);
}
//wild 
{
	int a=10,ptr;
	int *ptrt=&a;
	printf(" value %d\n",*ptrt);
	printf(" result %d\n",ptrt);
}
// void
{
	int  val=10,ptr;
	char a='A';
	int * const ptrt=&a;
	printf(" value %d\n",(int)ptrt);
	printf(" result %d\n",(char)ptrt);
}
// constant
{
	int  a=10,ptr;
	int *ptrt=&a;
	printf(" value %d\n",*ptrt);
	printf(" result %d\n",ptrt);
}
//dangling
{
	int  a=10,ptr;
	int *ptrt=&a;
	printf(" value %d\n",*ptrt);
	printf(" result %d\n",ptrt);
}
int *ptrt=0;
printf(" result %d\n",*ptrt);
return 0;
}

