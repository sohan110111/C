#include <stdio.h>
#include <string.h> // This is for strcpy()

struct myStructure {
    int myNumber;
    char myLetter;
    char myString[30]; // string
};

int main() {

    struct myStructure s1;
    s1.myNumber = 123;
    s1.myLetter = 'a';
    strcpy(s1.myString,"Some text here.");
    printf("Here string : %s", s1.myString);

    return 0;
}