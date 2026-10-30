#include <stdio.h>
int maxn(int a,int b,int c);
int main()
{
    int a,b,c;
    printf("\nEnter value of a here :");
    scanf("%d",&a);
    printf("\nEnter value of b here :");
    scanf("%d",&b);
    printf("\nEnter value of c here :");
    scanf("%d",&c);
    maxn(a,b,c);
    return 0;
}
int maxn(int a,int b,int c){
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is the largest ",a);
        }
        else
        {
            printf("%d is the largest ",c);
        }
    }
    else if(b>c)
    {
        printf("%d is the largest ",b);
    }
    else{
        printf("%d is the largest ",c);
    }
    return 0;
    
}