#include<stdio.h>
int main(){
    char letter;
    scanf("%c",&letter);
    switch(letter){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("vowel");
        break;
    default:
        printf("consonant");
    }





return 0;
}

