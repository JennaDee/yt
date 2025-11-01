#include <stdio.h>
#include <stdbool.h>
int main()
{
    // this is from a yt hehe
    /*

    this is for a multilined
    comment
    */
    int age = 99;
    float height = 4.9, temp = -100.9;
    double pi = 3.14159265358979;
    char grade = 'F', name[] = "GAndang nilalang";
    bool status = 1;
    // 1 is also true, 0 is falze

    printf("I like pizzaaa!");
    printf("\nCause it tastes like strawberry");
    printf("\nYou are %d years old", age);
    printf("\nHeight: %f meters", height);
    printf("\nThe temp is %f°F", temp);
    printf("\nValue of pi: %.15lf", pi);
    printf("\nYour grade is %c", grade);
    printf("\nPeople call me %s", name);
    printf("\n%d\n", status);

    if (status)
    {
        printf("You are ONLINE");
    }
    else
    {
        printf("You are OFFLine");
    }

    return 0;

    /*
    variable = A reusable container for a value.
    Behaves as if it were the value it contains.

    int = whole numbers (4 bytes in modern systems)
    float = single-precision decimal number (4 bytes)
    double = double-precision decimal number (8 bytes)
    char = single character (1 byte)
    char[] = array of characters (size varies)
    bool = true or false (1 byte, requires ‹ stdbool.h>)
    */
}