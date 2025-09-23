int arr[2000001]={'\0'};
int ar[100001]={'\0'};

#include <stdio.h>
int main()
{
    int n;
    int x;
    int num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&ar[i]);
    }

    scanf("%d",&x);

    for(int j=0;j<n;j++)
    {
        if(arr[x-ar[j]]==1 && x-ar[j] > 0)
        {
            num++;
        }
        arr[ar[j]]++;
    }

    printf("%d",num);

    return 0;

}