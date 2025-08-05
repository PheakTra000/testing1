#include <stdio.h>

int main() {
    int size;
    printf("Enter the number of element: ");
    scanf("%d", &size);

    int arr[size];
    printf("Add %d element", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}