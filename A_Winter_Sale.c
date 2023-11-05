#include <stdio.h>
int main()
{
    int discount ;
    float new_price;
    scanf("%d %f", &discount, &new_price);
    float main_price = (new_price *100)/(100- discount);
    printf("%0.2f", main_price);
    return 0;
}