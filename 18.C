#include <stdio.h>
int main()
{
    int a=5;
    int b=6;

    // Logical ooperator(||(Logical OR), &&(Logical AND),!(Logical NOT))

    printf("%d\n",(a>2)&&(b<10));
    printf("%d\n",(a>2)&&(a>b));
    
    printf("%d\n",(a>2)||(a>b));
    printf("%d\n",(a>2)||(b==6));
    
    printf("%d\n",!(a>2));
    
    return 0;
}



Output:
1
0
1
1
0
