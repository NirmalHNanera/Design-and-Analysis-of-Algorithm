#include <stdio.h>
#include <time.h>
clock_t start, end;
double cpu_time_used;

void readFile(FILE *fp)
{
    int a;
    if (fscanf(fp, "%d", &a) == EOF)
        return;
    printf("%d ", a);
    readFile(fp);
}
void main()
{
    FILE *fp;
    int a[100], i = 0;

    fp = fopen("data.txt", "r");
    start = clock();
    readFile(fp);
    end = clock();
    fclose(fp);
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime : %f", cpu_time_used);
    fclose(fp);
}