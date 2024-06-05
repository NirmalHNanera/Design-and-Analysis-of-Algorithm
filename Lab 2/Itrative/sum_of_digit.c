#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
void main(){
    int sum=0,n;
    printf("Enter Number : ");
    scanf("%d",&n);
    start = clock();
    while(n!=0){
        sum += n%10;
        n = n / 10;
    }
    printf("%d",sum);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime : %f",cpu_time_used);
    
}