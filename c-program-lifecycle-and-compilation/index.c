#include <stdio.h>

float show_percent (float num) {
    printf("%.2f", (num/100));
}

int main ()
{
    show_percent(70);
    
}
