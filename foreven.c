#include<stdio.h>
int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	for(n>=20;n>0;n=n-1){
	if(n%2==1)
	continue;
	n=n-1;
	printf("%d\n",n);
    }
	
	return 0;
}
