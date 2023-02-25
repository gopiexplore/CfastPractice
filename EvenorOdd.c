#include <stdio.h>
void main(){
    int n;
    printf("Enter a Number to check The Number is EVEN or ODD  ");
    scanf("%d",&n);
    if(n%2){//here the result other than 0 will execute this condition
        printf("ODD");
    }else printf("EVEN");
}
