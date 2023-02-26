#include <stdio.h>

void main(){
    int a;
    printf("Enter The Year To Check Leap Year Or Not");
    scanf("%d",&a);
    if(a%400==0){
        printf("The Entered Year is Leap Year ");
    }else if(a%4==0 && a%100!=0){
        printf("The Entered Year is Leap Year");
    }else printf("The Entered Year is NOT a LEAP YEAR");
}
