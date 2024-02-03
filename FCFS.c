#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of processes : ");
    scanf("%d", &n);
    int at[n], bt[n], tat[n], wt[n];
    int total=0;
    int i,totalwt=0,totaltat=0;
    float avgwt=0.0,avgtat=0.0;
    /*printf("Enter arrival time of all processes : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &at[i]);
    }*/
    printf("Enter burst time of all processes : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &bt[i]);
    }
    total+= bt[0];
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
    }
    printf("Process\t\tAT\t\tBT\t\tWT\t\tTAT\n\n");
    for(i=0;i<n;i++)
    {
        printf("P%d\t\t",(i+1));
        printf("0\t\t");
        printf("%d\t\t",bt[i]);
        printf("%d\t\t",wt[i]);
        tat[i]=wt[i]+bt[i];
        printf("%d\n",tat[i]);
    }
    for(i=0;i<n;i++)
    {
        totalwt+=wt[i];
        totaltat+=tat[i];
    }
    avgwt=totalwt/n;
    avgtat=totaltat/n;
    printf("\n\nAverage WT : %f\nAverage TAT : %f",avgwt,avgtat);
}