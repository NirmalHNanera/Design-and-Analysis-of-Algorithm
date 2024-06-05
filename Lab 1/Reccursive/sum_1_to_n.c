#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int sum(int n){
    if (n<1) return 0;
    return n+sum(n-1);
}
void main(){
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    start = clock();
    int ans = sum(a);
    printf("%d\n",ans);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}