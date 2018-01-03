#include<stdio.h>

float v[100], x[200];
int i, n;

int main()
{
    n=1;

    while(n<2)
    {
        printf("Give the number of elements in the sequence: ");
        scanf("%d",&n);
    }

    printf("\nGive values for the elements in the sequence: ");

    for(i=0;i<=n-1;i++)
    {
        printf("v[%d]=",i);
        scanf("%f",&v[i]);
        printf("\n");
    }

    for(i=0;i<=2*n-2;i=i+2)
    {
       x[i]=v[i/2];
    }

    for(i=1;i<=2*n-3;i=i+2)
    {
        x[i]=(x[i-1]+x[i+1])/2;
    }

    for(i=0;i<=n*2-2;i++)
    {
        printf("x[%d]=",i);
        printf("%f\n",x[i]);
    }

}
