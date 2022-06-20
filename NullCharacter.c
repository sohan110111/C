#include <stdio.h>

int main() {
    char string[] = "abc";
    int index = 0;
    while (1) {
        printf("%d - %c\n", index, string[index]);
        if (string[index] == '\0')
        {
            break;
        }
        index++;
    }
    return 0;
}