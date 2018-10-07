#include <stdio.h>

int main()
{
    int N; 
    int arr[100];
    int* ptr = arr;  // Pointer is now at arr[0];

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    printf("Enter the array elements: ");
    for(int i = 0; i < N; i++) {
        scanf("%d", ptr);

        // Increment pointer arr[index+1];
        ptr++;
    }
    
    // Now we need to reset the ptr position. ptr currently at arr[N-1];
    ptr = arr; // Pointer is now at arr[0];

     // Print the array
     for(int i = 0; i < N; i++) {
        // Print the value the pointer is pointing to.
        printf("%d, ", *ptr);

        // Increment pointer arr[index+1];
        ptr++;
    }

    return 0;
}