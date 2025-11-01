#include <stdio.h>
#include <string.h>
int main()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    // nul terminator
    char name[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    getchar();
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    // fgets have \n after entering so we will add a header file string
    name[strlen(name) - 1] = '\0';

    /*if u use  scanf("%s", &name);
        it will only get the firt name, cause it cant read the space7
        */

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}