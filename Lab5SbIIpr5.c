#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count,x,ok,y,j;
    int i=0;
    char c[200];

    printf("Enter the string: \n");
    scanf("%s", s);

     printf("Enter the string: \n");
    scanf("%s", c);

        count=0 ;
        x=strlen(c);
        y=strlen(s);

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
            count++;

        i++;
    }



    printf("The number of words c in the given string is: %d\n", count);

}



