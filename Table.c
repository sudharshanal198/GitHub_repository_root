#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, a[20][20],i,j,num,count=0;
    printf("Enter array size (for PxP array): ");
    scanf("%d", &n);
    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            a[i][j]=(rand()%8+1)*2;
        }
    }
    printf("\nGenerated 2D array:\n\n");
    printf("   ");
    for(j = 0; j < n; j++)
        printf("%4d", j);
    printf("\n");
    for(i = 0; i < n; i++)
    {
        printf("%2d ", i);
        for(j = 0; j < n; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("\nEnter a number to highlight (even number 2-16): ");
    scanf("%d", &num);
    printf("\nArray with %d highlighted:\n\n", num);
    printf("   ");
    for(j = 0;j<n;j++)
        printf("%5d",j);
    printf("\n");
    for(i = 0;i<n;i++)
    {
        printf("%2d ",i);
        for(j=0;j<n;j++)
        {
            if(a[i][j]==num)
            {
                printf("[%2d]",a[i][j]);
                count++;
            }
            else
            {
                printf("%4d",a[i][j]);
            }
        }
        printf("\n");
    }
    printf("\nNumber %d appeared %d time(s)\n",num,count);
}