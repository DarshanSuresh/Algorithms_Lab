#include <stdio.h>
#include <time.h>
#include <conio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for(i = 0; i < n - 1; i++) {
	for(j = 0; j < n - i - 1; j++) {
	    if(arr[j] > arr[j + 1]) {
		temp = arr[j];
		arr[j] = arr[j + 1];
		arr[j + 1] = temp;
	    }
	}
    }
}

int main() {
    int arr[100], n, i;
    clock_t start, end;
    double cpu_time;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
	scanf("%d", &arr[i]);
    }

    start = clock();
    bubbleSort(arr, n);
    end = clock();

    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
	printf("%d ", arr[i]);
    }

    printf("\nTime taken for bubble sort: %f seconds\n", cpu_time);
    getch();
    return 0;
}
