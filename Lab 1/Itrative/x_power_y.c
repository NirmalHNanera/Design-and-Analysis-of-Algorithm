#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
void main(){
    int n,p,no,ans=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("Enter Power : ");
    scanf("%d",&p);
    start = clock();
    for(int i=0;i<p;i++){
        ans = ans * n;
    }
    printf("%d\n",ans);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}