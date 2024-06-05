#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
void main(){
    int a;
    int sum = 0;
    printf("Enter Number : ");
    scanf("%d",&a);
    start = clock();
    for(int i=0;i<=a;i++){
        sum = sum + i;
    }
    printf("%d\n",sum);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}