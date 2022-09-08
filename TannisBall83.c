#include <stdio.h>

struct TanisBall {
    char color[15];
    float weight;
};

int main() {
    struct TanisBall Ball;
    struct TanisBall *myBall, *ptr;

    scanf("%s", &Ball.color);
    scanf("%f", &Ball.weight);

    myBall = &Ball;
    ptr = myBall;

    printf("%f\n", myBall->weight);
    printf("%s\n", myBall->color);
    printf("%s\n", ptr->color);
    printf("%f\n", ptr->weight);

    return 0;
}