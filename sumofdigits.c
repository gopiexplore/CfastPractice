//Sum of digits of a number:
#include <stdio.h>
void main(){
    int a,x,sum;
    printf("Enter a Number to find sum of digits of a Number");
    scanf("%d",&a);
    while(a>0){
        x=a%10;
        sum=sum+x;
        a=a/10;
    }
    printf("Sum of digits of a Number %d is %d",a,sum);
}
