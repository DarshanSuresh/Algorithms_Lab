#include <stdio.h>
#include <time.h>
#include <conio.h>

int linearSearch(int a[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
	if(a[i] == key)
	    return i;
    }
    return -1;
}

int main() {
    int n, i, key, pos;
    int a[100];
    clock_t start, end;
    double cpu_time;
    clrscr();

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
	scanf("%d", &a[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    start = clock();
    pos = linearSearch(a, n, key);
    end = clock();

    cpu_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    if(pos != -1)
	printf("Element found at position %d\n", pos + 1);
    else
	printf("Element not found\n");

    printf("Time taken for linear search: %f seconds\n", cpu_time);
    getch();
    return 0;
}
