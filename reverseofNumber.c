//Sum of digits of a number:
#include <stdio.h>
void main(){
    int a,x,sum;
    printf("Enter a Number to find Reverse  of a Number");
    scanf("%d",&a);
    while(a>0){
        x=a%10;
        sum=sum*10+x;
        a=a/10;
    }
    printf("Reverse of a Number is %d",sum);
}
