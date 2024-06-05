#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
int factorial_calc(int n){
    if(n<2){
        return 1;
    }
    return n*factorial_calc(n-1);
}
void main(){
    int a;
    printf("Enter Number : ");
    scanf("%d",&a);
    start = clock();
    a = factorial_calc(a);
    printf("%d\n",a);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}