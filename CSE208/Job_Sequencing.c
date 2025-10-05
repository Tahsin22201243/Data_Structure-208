#include<stdio.h>
#include <stdlib.h>
#include <math.h>

//Structure for the Job Function
struct job{
char id;
int deadline,profit;

};
//Compare function used when quick sort is applied
int compare(const void* a,const void* b){

return((struct job*)b)->profit - ((struct job*)a)->profit;
}


void jobScheduling(struct job jobs[],int n){

//quick sort to descending the Highest Profit sequence
qsort(jobs,n,sizeof(struct job),compare);

//Declaration
int result[n],maxProfit=0;
int slot[n];
for(int i =0;i<n;i++){
    slot[i] = 0;
}
for(int i=0; i<n;i++){
    for(int j = fmin(n,jobs[i].deadline)-1;j>=0;j--){

        if(slot[j]==0){ //Focus on slot i,j this is sensative also function arr[] this bracket
            result[j]=i;
            slot[j]=1;
            maxProfit+=jobs[i].profit;
            break;
        }
    }
}
printf("The Maximum Profit Sequence:");
for(int i=0;i<n;i++){
    if(slot[i]){
        printf("%c\n",jobs[result[i]].id);
    }
}
printf("Maximum Profit: %d\n",maxProfit);

}

int main()
{
    struct job jobs[]= {
        {'1',2,90},
        {'2',1,80},
        {'3',2,100},
        {'4',3,50},
        {'5',1,40}
    };
    int n = sizeof (jobs)/sizeof(jobs[0]);
    jobScheduling(jobs,n);
    return 0;
}
