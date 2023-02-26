//Palindrome number
#include <stdio.h>
void main(){
    int a,x,rev,dup;
    printf("Enter a Number to find Reverse  of a Number");
    scanf("%d",&a);
    dup=a;
    while(a>0){
        x=a%10;
        rev=rev*10+x;
        a=a/10;
    }
    if(dup==rev){printf("The Number is Palindrome Number");
    }
}
