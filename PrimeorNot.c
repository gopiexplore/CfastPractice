
//Prime number
#include <stdio.h>
void main(){
    int a,count,i;
    printf("Enter a Number to find it is prime or not");
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            count=count+1;
        }
    }if(count>0){
        printf("%d is Not a Prime Number",a);
    }else printf("%d is a Prime Number",a);
}
