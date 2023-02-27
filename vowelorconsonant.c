//Check whether a character is a vowel or consonant
#include <stdio.h>

void main(){
    char c;
    printf("Enter a char to Check whether a character is a vowel or consonant");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|| c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
        printf("The Entered character is a vowel");
    }else printf("The Entered character is consonant");
}
