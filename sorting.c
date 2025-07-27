#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("%d elements:",n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Choose sorting order:\n");
    printf("1. Ascending\n2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if((choice == 1 && arr[j] > arr[j+1]) ||
               (choice == 2 && arr[j] < arr[j+1])) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
