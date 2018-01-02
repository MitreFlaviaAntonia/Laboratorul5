#include <stdio.h>
#include <string.h>

int countOccurrences(char * s, char * c);

int main()
{
    int count;
    char c[200];
    char s[200];

    printf("Enter the string: \n");
    gets(s);

    printf("Enter the string: \n");
    gets(c);


    count = countOccurrences(s, c);

    printf("Total occurrences of '%s': %d", c, count);

    return 0;
    }

int countOccurrences(char * s, char * c)
{
    int count,i,x,ok,y,j;

    y = strlen(s);
    x = strlen(c);
    count = 0;
    i=0;
    while(i!=y-x+1)
    {
        ok=1;

        for(j=0;j<=x-1;j++)
        {
            if(s[i+j]!=c[j])
            {
                ok=0;
                break;
            }

        }



        if(ok==1)
           {

           count++;}

        i++;
    }


return count;}




