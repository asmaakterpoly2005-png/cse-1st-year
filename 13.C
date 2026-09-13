#include <stdio.h>
int main()
{
    float radius,area;
    //scanf means people input the data.
    printf("enter the radius\n");
    scanf("%f",& radius);

    area=3.1416*radius*radius;
    printf("The area of the circle is %f\n",area);
    return 0;
}
