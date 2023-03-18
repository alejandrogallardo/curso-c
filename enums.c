#include <stdio.h>

enum weekDays {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturnday};

int main()
{
    enum weekDays today;
    today = Wednesday;
    printf("Day %d\n", today + 1); 
    return 0;
}
