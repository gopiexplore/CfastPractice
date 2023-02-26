//Greatest of the Three numbers
#include <stdio.h>
void main(){
    int a,b,c;
    printf("Enter Three numbers to Find Greatest");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is Greatest",a);
    }else if (b>a && b>c){
        printf("%d is Greatest",b);
    }else printf("%d is Greatest",c);
}
