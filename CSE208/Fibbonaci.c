#include<stdio.h>
int memo[100];
int fibo(int n)
{

    if(n<=1)
        return n;

    if(memo[n]==-1)
    {

        memo[n] = fibo(n-1)+fibo(n-2);
    }
    return memo[n];
}


int main()
{
    int n;
  scanf("%d",&n);
    for(int i=0; i<=n; i++)
    {
        memo[i]=-1;
    }

    printf("%d\n",fibo(n));


}
