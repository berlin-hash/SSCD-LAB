#include <stdio.h>

void main(){
    int n, i, qt, count =0,temp,sq=0,bt[10], wt[10],tat[10],rem_bt[10];
    float awt =0, atat =0;

    printf("Enter number of processes");
    scanf("%d", &n);
    printf("Enter burst time of process");
    for(int i=0; i<n; i++){
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }
    printf("Enter wuantum time");
    scanf("%d", &qt);

    while(1){
        for(i=0, count=0; i<n; i++){
            temp = qt;
            if(rem_bt[i]==0){
                count++;
                continue;
            }
            if(rem_bt[i] > qt){
                rem_bt[i] -= qt;
            }
            else{
                if(rem_bt[i]>=0){
                    temp = rem_bt[i];
                    rem_bt[i] = 0;
                }
                sq = sq+
            }

        }
    }
}