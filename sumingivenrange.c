//Sum of numbers in a given range:
#include <stdio.h>
void main(){
    int a,b,sum;
    printf("Enter two numbers to find Sum of numbers in a given range:");
    scanf("%d %d",&a,&b);
    for(a;a<=b;a++){
        sum=sum+a;
    }printf("The sum in given range is %d",sum);
}
