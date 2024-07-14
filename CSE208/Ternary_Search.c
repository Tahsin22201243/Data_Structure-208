
#include <stdio.h>

int ternarySearch(int array[], int target, int left, int right) {
    if (right >= left) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (target == array[mid1]) {
            return mid1;
        }

        if (target == array[mid2]) {
            return mid2;
        }

        if (target < array[mid1]) {
            return ternarySearch(array, target, left, mid1 - 1);
        } else if (target > array[mid2]) {
            return ternarySearch(array, target, mid2 + 1, right);
        } else {
            return ternarySearch(array, target, mid1 + 1, mid2 - 1);
        }
    }

    return -1;
}

void sortArray(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, target;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    sortArray(array, n);

    int result = ternarySearch(array, target, 0, n - 1);

    if (result == -1) {
        printf("Element not found in the array\n");
    } else {
        printf("Element found at index %d\n", result);
    }

    return 0;
}
