#include<stdio.h>
int main()
{
    int p=12-3;
    int b=--p +10-7;
    int c=b++ + ++p +54;

    b++;
    --c;
    --p;

    c=--b - p++;
    printf("p=%d\nb=%d\nc=%d",++p,c%3,b/5);
    return 0;
}C





RUN_:p=10
     b=1
     c=2
