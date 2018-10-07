#include <stdio.h>


void inputArray(int* arr, int size)
{
    // Need to get the end of the array
    int* arrEnd = (arr + size - 1);

    // (arr++) Input in current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    printf("Please inset numbers: ");
    while(arr <= arrEnd)
        scanf("%d", arr++);
}

void printArray(int* arr, int size)
{
    // Need to get the end of the array
    int* arrEnd = (arr + size - 1);

    // *(arr++) Print current array element and move to next element.
    // Till last array element (arr <= arrEnd)
    while(arr <= arrEnd)
        printf("%d, ", *(arr++)); 
}

int sortAscending(int* num1, int* num2)
{
    return (*num1) - (*num2);
}

int sortDescending(int* num1, int* num2)
{
    return (*num2) - (*num1);
}

// 3 parameter is a function pointer
void sort(int* arr, int size, int (* compare)(int *, int *))
{
    int* arrEnd = (arr + size - 1);

    int* currentElem = arr;
    int* elemToSort;

    // Compare each element with current element for proper order
    while(currentElem <= arrEnd) {
        elemToSort = currentElem;

        while(elemToSort <= arrEnd) {
            if(compare(currentElem, elemToSort) > 0) {
                int temp = *elemToSort;
                *elemToSort = *currentElem;
                *currentElem = temp;
            }
            elemToSort++;
        }
        // Compare next element
        currentElem++;
    }
}

int main()
{
    int arr[100];
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    inputArray(arr, size);

    printArray(arr, size);

    printf("\nSorted in ascending order: ");
    sort(arr, size, sortAscending);
    printArray(arr, size);

    printf("\nSorted in descending: ");
    sort(arr, size, sortDescending);
    printArray(arr, size);

    return 0;
}