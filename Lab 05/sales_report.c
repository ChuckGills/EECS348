#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{   
    float sales[12]
    printf("January Sales:");
    scanf("%.2f", sales[0]);
    printf("February Sales:");
    scanf("%.2f", sales[1]);
    printf("March Sales:");
    scanf("%.2f", sales[2]);
    printf("April Sales:");
    scanf("%.2f", sales[3]);
    printf("May Sales:");
    scanf("%.2f", sales[4]);
    printf("June Sales:");
    scanf("%.2f", sales[5]);
    printf("July Sales:");
    scanf("%.2f", sales[6]);
    printf("August Sales:");
    scanf("%.2f", sales[7]);
    printf("September Sales:");
    scanf("%.2f", sales[8]);
    printf("October Sales:");
    scanf("%.2f", sales[9]);
    printf("November Sales:");
    scanf("%.2f", sales[10]);
    printf("Decemeber Sales:");
    scanf("%.2f", sales[11]);


    for(int i=0;i<=11;i++) 
    {
        printf("sale %.2f",sales[i]);
    }


    return 0;
}