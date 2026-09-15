#include<stdio.h>
int main()
{
    int A=5;
    int B=++A +9-1;
    int C=A++ + B-- - --A +2;

    --C;
    A++;
    B--;

    A= ++C - B++;
    printf("A=%d\nB=%d\nC=%d",A--,B/3,++C);
    return 0;
}






RUN:A=4
    B=4
    C=17

=== Code Execution Successful ===

