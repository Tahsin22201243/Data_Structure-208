#include<stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;

}
int knapsack(int weight[],int value[],int n,int capacity)
{
    int dp[n+1][capacity+1];


    for(int i=0; i<=n; i++)
    {
        for(int w=0; w<=capacity; w++)
        {
            if(i==0||w==0)
            {
                dp[i][w]=0;
            }else if(weight[i-1]<=w){ //the item i must be i-1 focus on that

            dp[i][w]= max(dp[i-1][w],dp[i-1][w-weight[i-1]]+value[i-1]); //Focus on the max law
            }else{

            dp[i][w]=dp[i-1][w];
            }
        }

    }
    return dp[n][capacity];


}

int main(){
int capacity,n,kg; // the capacity is max weight and n is value no,the kg is weight arrays size
printf("Enter the size of capacity :");

scanf("%d",&capacity);


printf("Enter the size of weight and value:");

scanf("%d %d",&kg,&n);
int weight[kg],value[n];
printf("Enter the values of them:");

for(int i=0;i<kg;i++){

    scanf("%d",&weight[i]);
}

for(int i=0;i<n;i++){

    scanf("%d",&value[i]);
}

printf("The Knapsack value is: %d\n",knapsack(weight,value,n,capacity)); //Don't forget to return value by catch print and maintain parameter sequence
return 0;

}
