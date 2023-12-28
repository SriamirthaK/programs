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

/*and the output is enter num 5
*
**
***
****
*****/

#include<stdio.>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("1 ");
        }
        printf("\n");
    }
}

/*and the output is enter num 5
1
11
111
1111
11111*/

#include<stdio.>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
}

/*and the output is enter num 5
1
12
123
1234
12345*/
