#include <stdio.h>

void changePosition(int *number1, int *number2)
{
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}


void bubbleSort(int array[], unsigned int totalArrayPositions)
{
    unsigned int i, j;

    for(i = 0; i < totalArrayPositions; i++) {
        for (j = 0; j < totalArrayPositions-i-1; j++) {
            if (array[j] > array[j+1])
                changePosition(&array[j], &array[j+1]);
        }
    }
}

void printArray(int array[], unsigned int totalArrayPositions)
{
    unsigned int i;
    totalArrayPositions--;

    printf("Arreglo ordenado = ");

    for (i = 0; i < totalArrayPositions; i++)
        printf("%d, ", array[i]);
    printf("%d.\nFin del ordenamiento, saludos.\n", array[totalArrayPositions]);
}

int main()
{
    int inputVector[] = {98, 87, 75, 12, 1, 5, 2};
    int n = sizeof(inputVector) / sizeof(inputVector[0]);

    bubbleSort(inputVector, n);
    printArray(inputVector, n);

    return 0;
}