#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int fibonaci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    return fibonaci(n-1)+fibonaci(n-2);
}
void main(){
    int n;
    int a=0,b=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    start = clock();
    for(int i=0;i<=n;i++){
       int ans = fibonaci(i);
       printf("%d",ans); 
    }
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime : %f",cpu_time_used);
}