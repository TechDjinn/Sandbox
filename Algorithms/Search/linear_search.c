#include <stdio.h>
#include <stdlib.h>

// Function Prototype
int linearSearch(const int target, int array[], const int array_len);

int main(int argc, char *argv[])
{
    int index, target;

    // Array of numbers; to be searched.
    int array[] = { 22, 5, 54, 8, 62, 65, 12, 19, 18, 34 };
    int array_len = sizeof(array) / sizeof(array[0]);

    // Determine what number we are looking for.
    if (argc == 2)
        target = atoi(argv[1]);
    else
        target = 50;

    // Find out at what index 'target' is; if present in array.
    index = linearSearch(target, array, array_len);
    if (index == -1)
        printf("%i is NOT in the array.\n", target);
    else
        printf("Found %i at index %i.\n", target, index);

    return 0;
}

int linearSearch(const int target, int array[], const int array_len)
{
    for (int i = 0; i < array_len; i++)
        if (array[i] == target)
            return i;               // 'target' found at index 'i'.

    return -1;                      // 'target' NOT found in array.
}
