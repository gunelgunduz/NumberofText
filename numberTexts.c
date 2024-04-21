#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    //Program that finds the number of times a character entered from the keyboard appears in the entered text.
    char text[100];
    char ch;
    int piece=0;

    printf(" enter text:"); gets(text);
    printf(" enter character:"); scanf(" %c", &ch);


    int i;
    for(i=0; text[i]!='\0'; i++){
        if(text[i] == ch)
        piece++;
    }

    printf(" Of the %c letter  %d ", ch, piece);
    return 0;
}