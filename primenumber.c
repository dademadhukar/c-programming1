#include<stdio.h>
int main(){
	int num,flag=0;
	printf("enter the number");
	scanf("%d",&num);
	if(num%1==0||num%num==0){
		printf("it is a prime number");
	}else{
		printf("it is not prime number");
	}
	return 0;
}
