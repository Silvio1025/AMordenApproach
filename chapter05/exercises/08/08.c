#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int age;
    bool teenager;

    printf("Please enter age:");
    scanf("%d", &age);

    if (age >= 13 && age <= 19)
    {
        teenager = true;
    }
    else
    {
        teenager = false;
    }

    return 0;
}