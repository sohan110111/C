#include <stdio.h>
#include <string.h>
struct Product
{
    char name[15];
    double price;
} myProduct;

void productInfo(struct Product p)
{
    printf("Procuct Name : %s\nProcuduct Price : %.2f\n", p.name, p.price);
}

int main()
{
    strcpy(myProduct.name, "sunsilk");
    myProduct.price = 2.00;

    productInfo(myProduct);

    return 0;
}