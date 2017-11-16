#include<stdio.h>
int main()
{
    int x[100][100],i,j,n,pr1,pr3,sum2,sum4;

        pr1=1;
        sum2=0;
        pr3=1;
        sum4=0;

        printf("Give the value for n: ");
        scanf("%d",&n);


            for(i=0;i<n;i++)
            {
                    for(j=0;j<n;j++)
                    {
                        printf("x[%d][%d]=",i,j);
                        scanf("%d",&x[i][j]);
                    }
                printf("\n");
            }


                for(i=0;i<n;i++)
                {
                    for(j=0;j<n;j++)
                    {
                        printf("%d",x[i][j]);
                        printf(" ");
                    }
                        printf("\n");
                }


                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<n;j++)
                            {
                                if(i<j&&i+j<n-1)
                                    pr1=pr1*x[i][j];

                                if(i>j&&i+j<n-1)
                                    sum2=sum2+x[i][j];

                                if(i>j&&i+j>n-1)
                                    pr3=pr3*x[i][j];

                                if(i<j&&i+j>n-1)
                                    sum4=sum4+x[i][j];
                            }
                    }

                    printf("The product for area 1 is: %d", pr1);
                    printf("\nThe sum for area 2 is: %d",sum2);
                    printf("\nThe product for area 3 is: %d", pr3);
                    printf("\nThe sum for area 4 is: %d",sum4);

}
