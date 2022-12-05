#include<stdio.h>
int main()
{
    int i,j,k;
    for ( i = 1; i <=5; i++)
    {
        k=65;
        for(j=1;j<=11;j++)
        {
            if(j<=6-i||j>=5+i)
            {
                printf("%c",k);
                if(j<6)
                {
                    k++;
                }
                else
                k--;
            }
            else
            printf(" ");

        }
        printf("\n");
    }
    
}