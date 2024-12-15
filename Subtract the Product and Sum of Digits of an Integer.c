#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum=0,prod=1;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    int s=abs(sum-prod);
    printf("%d",s);
}