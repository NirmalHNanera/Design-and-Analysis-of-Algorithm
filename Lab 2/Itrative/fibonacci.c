#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
void main(){
    int n,c;
    int a=0,b=1;
    printf("Enter Number : ");
    scanf("%d",&n);
    printf("%d",a);
    start = clock();
    for(int i=1;i<n;i++){
        c = a+b;
        printf("%d",c);
        b=a;
        a=c;
    }
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("\nTime : %f",cpu_time_used);
}