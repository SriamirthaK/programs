#include<stdio.>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}