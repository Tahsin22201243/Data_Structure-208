#include <stdio.h>

int partition(int array[], int left, int right) {
    int pivot = array[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (array[j] <= pivot) {
            i++;
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i + 1];
    array[i + 1] = array[right];
    array[right] = temp;

    return i + 1;
}

void quickSort(int array[], int left, int right) {
    if (left < right) {
        int pivot = partition(array, left, right);
        quickSort(array, left, pivot - 1);
        quickSort(array, pivot + 1, right);
    }
}

int main() {
    int n;

    // Prompt user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int array[n];

    // Prompt user for the elements
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the array
    quickSort(array, 0, n - 1);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    printf("\n");

    return 0;
}
