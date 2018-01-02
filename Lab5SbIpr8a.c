#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int counter;
    int i=0;

    printf("Enter the string: \n");
    scanf("%[^\n]s", s);

        counter=2 ;

    while(s[i]==' ')
        i++;

    if(s[i]=='\0')
    {
        printf("The number of words in the given string is: 0");
        return 0;
    }

    while (s[i+1]!='\0')
    {
        if (s[i] == ' '&&s[i-1]!=' '&&s[i+1]!=' ')
            counter++;
        i++;
    }

    if(s[strlen(s)-1]!=' ')
    counter=counter-1;

    if(s[strlen(s)-1]==' ')
    counter=counter-1;

    printf("The number of words in the given string is: %d\n", counter);
}




