#include <stdio.h>

void display_arr(int arr[], int size);
int calculate_sum(int arr[], int size);
void update_element(int arr[], int index, int new_val, int n);
void pointer_accessing(int arr[], int index, int n);

int main() {
    int arr[25], i, n, idx, nv, pa;

    printf("Enter n elements in array: \n");
    scanf("%d", &n);

    printf("Enter Initial Array Elements: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    display_arr(arr, n);

    int sum = calculate_sum(arr, n);
    printf("\nSum of Array Elements: %d\n", sum);

    printf("Enter particular index to be updated: ");
    scanf("%d", &idx);

    printf("Enter the new value to be updated: ");
    scanf("%d", &nv);

    update_element(arr, idx, nv, n);

    printf("\nArray After Updating Element at Index %d:\n", nv);
    display_arr(arr, n);

    printf("Enter the index at which it needs to be accessed: \n");
    scanf("%d", &pa);
    printf("Pointer Access at Index %d:\n", pa);
    pointer_accessing(arr, pa, n);

    return 0;
}

void display_arr(int arr[], int size) {    // Function to display the array elements
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void update_element(int arr[], int index, int new_val, int n) {    // Function to update an element at a specific index
    if (index >= 0 && index < n) {
        arr[index] = new_val;
    } else {
        printf("Invalid index\n");
    }
}

int calculate_sum(int arr[], int size) {    // Function to calculate the sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void pointer_accessing(int arr[], int index, int n) {    // Function to demonstrate pointer access
    if (index >= 0 && index < n) {
        printf("*(arr + %d) = %d\n", index, *(arr + index));
    } else {
        printf("Invalid index!\n");
    }
}
