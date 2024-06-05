#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int sum_digit(int n){
    if (n==0) return 0;
    return n%10 + sum_digit(n/10);
}
void main(){
    int sum=0,n;
    printf("Enter Number : ");
    scanf("%d",&n);
    start = clock();
    int ans = sum_digit(n);
    printf("%d",ans);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime : %f",cpu_time_used);
    
}