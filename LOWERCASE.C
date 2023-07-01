#include<stdio.h>

int main(){
    char a;
    printf("Enter a character:");
    scanf("%c",&a);
    if(a<=122 && a>=97)
    {
        printf("Lowercase character.");
    }
    else{
        printf("Uppercase character.");
    }

    return 0;
}