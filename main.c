#include <stdio.h>
#include <stdlib.h>
#define COINS 10
#define MAX 10


int coins[COINS] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int list[MAX] = {0};

void coin_change(int n)
{
    int i,j,k=0;
    for(j=COINS-1; j>=0; j--)
    {
       while(n>= coins[j])
       {

           n -= coins[j];
           list[k++] = coins[j];
       }
    }
    for(i=0;i<k;i++)
    {
        printf("\t%d",list[i]);
    }
}

int main()
{
    int n;
    printf("Enter the change value: ");
    scanf("%d",&n);
    printf("The coins required for change %d is: ", n);
    coin_change(n);
    return 0;
}
