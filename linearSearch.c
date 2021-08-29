#include <stdio.h>

int search(int inputArray[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++) {
        if (inputArray[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int position;
    int searchOptions[] = {10, 11, 12, 13, 14, 15, 16, 99, 100, 120};
    int arraySize = sizeof(searchOptions) / sizeof(searchOptions[0]);

    position = search(searchOptions, arraySize, 100);

    printf("%d", position);
}