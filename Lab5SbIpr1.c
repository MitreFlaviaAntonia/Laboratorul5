#include<stdio.h>
int main()
{
    int i,n,contor;
    float x[100];

    contor=0;
    n=0;

    while(n<3)
    {
        printf("Give the number of elements in the vector: ");
        scanf("%d",&n);
    }

            for(i=1;i<=n;i++)
            {
                printf("x[%d]=",i);
                scanf("%d",&x[i]);
            }

            for(i=2;i<=n-1;i++)
                {
                    if( x[i] == ( x[i-1] + x[i+1] ) /2 )

                        contor++;
                }

                printf("\nThe number of elements from the vector that are equal with the average of the neighbours is:");
                printf("%d", contor);

}
