#include <stdio.h>

int main()
{
    int n;
    printf("Enter the limit:- ");
    scanf("%d",&n);
    int num=1;
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",num);
        num=num*2*2;
        
    }
    return 0;
}
