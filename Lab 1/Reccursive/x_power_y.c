#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;

int power(int n,int p){
    if(p<1) return 1;
    return n*power(n,p-1);
}
void main(){
    int n,p,ans;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("Enter Power : ");
    scanf("%d",&p);
    start = clock();
    ans = power(n,p);
    printf("%d\n",ans);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}