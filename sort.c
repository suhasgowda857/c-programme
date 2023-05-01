#include <stdio.h>

void selectionSort(int arr[], int n);

void sorting() {
  int arr[100], n, i;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  selectionSort(arr, n);

  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

 // return 0;
}

void selectionSort(int arr[], int n) {
  int i, j, minIndex, temp;

  for (i = 0; i < n - 1; i++) {
    minIndex = i;

    for (j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    if (minIndex != i) {
      temp = arr[i];
      arr[i] = arr[minIndex];
      arr[minIndex] = temp;
    }
  }
}

