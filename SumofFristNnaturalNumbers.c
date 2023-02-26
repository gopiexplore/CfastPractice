#include <stdio.h>
void main(){
	int n,sum;
	printf("Enter The Number to Find First N Natural Numbers");
	scanf("%d",&n);//use while(n>0)
	for(i=0;i<=n;i++){
		sum=sum+i;
	}printf("%d",sum);
}
