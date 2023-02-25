#include <stdio.h>
void main(){
    int Number;
    printf("Enter a Number to Check Positive or Negative:");
    scanf("%d",&Number);
    if(Number<0){
        printf("The Entered Number is Negative");
    }
    else if(Number>0){
        printf("The Entered Number is Positive");
    }else{
        printf("The Entered Number is ZERO");
    }
}
