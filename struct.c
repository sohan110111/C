#include <stdio.h>

int main() {
    struct Car {
        char brandName[100];
        char owner[100];
        int price;
    };


    struct Car car1 = {"Tesla", "Rakib", 78000};
    struct Car car2 = {"Ford", "Musfiq", 75000};
    struct Car car3 = {"BMW", "Sabirul", 76000};

    printf("Serial No. 1 car = BrandName : %s, OwnerName : %s, NetPrice : %d\n", car1.brandName, car1.owner, car1.price);
    printf("Serial No. 2 car = BrandName : %s, OwnerName : %s, NetPrice : %d\n", car2.brandName, car2.owner, car2.price);
    printf("Serial No. 3 car = BrandName : %s, OwnerName : %s, NetPrice : %d\n", car3.brandName, car3.owner, car3.price);


    return 0;
}