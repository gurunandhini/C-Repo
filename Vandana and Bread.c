#include<stdio.h>
int main()
{
    int N,M,K;
    scanf("%d%d%d",&N,&M,&K);
    if(N<=M*K){
        printf("YES");
    }
    else{
        printf("NO");
    }
}