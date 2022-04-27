#include <stdio.h>
int main()
{

    float Number;
    printf("Enter Decimal number: ");
    scanf("%f", &Number);
    int DecimalNumber;
    DecimalNumber = (int)Number;
    // printf("Decimal Numer is : %d\n", DecimalNumber);
    float floatNumber = Number - DecimalNumber;
    // printf("Floating number : %f\n", floatNumber);

    // work variable
    int array[10];
    int i = 0;

    // decimal to binary representation for DecimalNumber
    while (1)
    {
        int reminder = DecimalNumber % 16;
        array[i] = reminder;
        i++; // count number for looping
        DecimalNumber = DecimalNumber / 16;
        if (DecimalNumber == 0)
        {
            break;
        }
    }
    printf("Hexadecimal value : ");
    // This is for integer part
    for (i = i - 1; i >= 0; i--)
    {
        if (array[i] <= 9)
        {
            printf("%d", array[i]);
        }
        else
        {
            if (array[i] == 10)
            {
                printf("A");
            }
            else if (array[i] == 11)
            {
                printf("B");
            }
            else if (array[i] == 12)
            {
                printf("C");
            }
            else if (array[i] == 13)
            {
                printf("D");
            }
            else if (array[i] == 14)
            {
                printf("E");
            }
            else
            {
                printf("F");
            }
        }
    }
    // This is for fractional part
    printf(".");
    int result;
    int f = 0;
    while (f < 4)
    {
        floatNumber = floatNumber * 16;
        result = (int)floatNumber;
        if (result <= 9)
        {
            printf("%d", result);
        }
        else
        {
            if (result == 10)
            {
                printf("A");
            }
            else if (result == 11)
            {
                printf("B");
            }
            else if (result == 12)
            {
                printf("C");
            }
            else if (result == 13)
            {
                printf("D");
            }
            else if (result == 14)
            {
                printf("E");
            }
            else
            {
                printf("F");
            }
        }
        if (floatNumber == 0)
        {
            break;
        }

        floatNumber = floatNumber - result;
        f++;
    }
    return 0;
}