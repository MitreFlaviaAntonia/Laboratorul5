#include<stdio.h>
int main()
{
    int n,x[100],i,j,testvariable,ratio;

    printf("Give the number of elements from the vector: ");
    scanf("%d",&n);

    testvariable=1;

        for(i=0;i<=n-1;i++)
        {
            printf("x[%d]=",i);
            scanf("%d",&x[i]);
        }

        ratio=x[1]-x[0];

            for(j=1;j<=n-2;j++)
            {

                    if((x[j+1]-x[j])!=ratio)
                        {
                        testvariable=0;break;
                        }
            }



        if (testvariable==0)
                printf("Is not an arithmetical progression");

                else
                    printf("The ratio of the arithmetical progression is: %d", ratio);


}
