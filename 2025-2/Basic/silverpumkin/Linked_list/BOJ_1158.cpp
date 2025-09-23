#include <stdio.h>
int main()
{
    int n,k,et;
    int i,j;
    int k_count=0;
    int k__count=0;
    int a[5001]={'\0'};

    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
    {
        a[i]=i;
    }
    
    printf("<");

    for(j=1;j<=n;j++)
    {
        if(a[j] != 0)
        {
            k_count++;
        }
        if(k_count==k)
        {
            k__count++;
            if(k__count == n)
            {
                et = a[j];
                break;
            }
            printf("%d, ",a[j]);
            a[j]=0;
            k_count = 0;
        }
        if(j==n)
        {
            j = 0;
        }
    }

    printf("%d>",et);

}