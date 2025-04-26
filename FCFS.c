#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of process : ");
    scanf("%d", &n);

    int ar[10],bt[10],wt[10],tat[10],ct[10],sum;
    //completion time

    for(int i=0;i<n;i++){
        printf("Enter the arival time %d process : ", i+1);
        scanf("%d",&ar[i]);

        printf("enter the burst time %d process : ", i+1);
        scanf("%d",&bt[i]);
    }

    sum=ar[0];
    for(int i=0;i<n;i++){
        sum=sum+bt[i];
        ct[i]=sum;
    }

    for(int i=0;i<n;i++){
        tat[i]=ct[i]-ar[i];
    }

    for(int i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
    }

    printf("\nProcess\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for(int i=0;i<n;i++){
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,ar[i],bt[i],ct[i],tat[i],wt[i]);
    }

    return 0;
}