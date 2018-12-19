#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Zuhair";
    char full_name[] = {'Z', 'u', 'h', 'a', 'i', 'r', '\0'};
    areas[0] = 100;
    name[1] = 'U';
    full_name[1] = 'U';

    printf("The size of an int is %ld\n", sizeof(int));
    printf("The size of areas (int[]) is %ld\n", sizeof(areas));
    printf("The number of ints in area is %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);

    printf("The size of char is %ld\n", sizeof(char));
    printf("The size of name (char[]) is %ld\n", sizeof(name));
    printf("The number of chars in name is %ld.\n", sizeof(name) / sizeof(char));

    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

    return 0;
}