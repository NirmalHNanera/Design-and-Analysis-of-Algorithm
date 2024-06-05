#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
void main(){
    start = clock();
    for(int i=0;i<=50;i++){
        printf("%d\n",i);
    }
    
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}