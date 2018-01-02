#include<stdio.h>

char s[100];
int i,x;
char j,r;
int v[100];

int main()
{
    printf("Enter the string: \n");
    scanf("%[^\n]s", &s);


    for(j='a';j<='z';j++)
    {
        v[j]=0;
    }

    for(j='A';j<='Z';j++)
    {
        v[j]=0;
    }

    for(i=0;i<=strlen(s)-1;i++)
    {
        if(s[i]!=' ')
        {
            r=s[i];
            v[r]++;
        }
    }

    for(j='a';j<='z';j++)
    {
        if(v[j]!=0)
        printf("The letter %c appears %d times\n",j,v[j]);
    }

    for(j='A';j<='Z';j++)
    {
        if(v[j]!=0)
        printf("The letter %c appears %d times\n",j,v[j]);
    }

}
