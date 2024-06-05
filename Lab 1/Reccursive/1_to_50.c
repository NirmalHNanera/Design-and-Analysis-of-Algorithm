#include<stdio.h>
#include<time.h>
clock_t start,end;
double cpu_time_used;
void print_number(int s,int e){
    printf("%d\n",s);
    if (s<e)
        print_number(s+1,e);
}
void main(){
    start = clock();
    print_number(1,50);
    end = clock();
    cpu_time_used = ((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time : %f",cpu_time_used);
}