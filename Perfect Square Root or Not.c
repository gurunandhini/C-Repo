#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r=sqrt(n);
    if(r*r == n){
        printf("True");
    }
    else{
        printf("False");
    }
}