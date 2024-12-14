#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%1==0 && n%i!=0 && n%n==0){
            printf("Prime");
            break;
        }
    else{
        printf("Not Prime");
        break;
    }
    }
}