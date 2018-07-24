#include<stdio.h>

void createHeap(int *arr, int parent, int n){
	for(; parent >= 0; parent--){
		int left = parent * 2 + 1;
		int right = parent * 2 + 2;
		int j = 0;

		if(right < n){
			arr[left] > arr[right] ? j = left : j = right;
		}else{
			j = left;
		}

		if(arr[j] > arr[parent]){
			int tmp = arr[parent];
			arr[parent] = arr[j];
			arr[j] = tmp;
		}
	}
}

void heapSort(int *arr, int n){
	// build the heap
	createHeap(arr, n/2-1, n);

	for(int j = n - 1; j >= 0; j--){
		int tmp = arr[0];
		arr[0] = arr[j];
		arr[j] = tmp;

		int parent = j / 2 - 1;
		createHeap(arr, parent, j);
	}

}


int main() {
    int a[] = { 10,6,5,7,12,8,1,3,11,4,2,9,16,13,15,14 };
    int n = sizeof(a) / sizeof(int);
    heapSort(a, n);
    printf("排序好的数组为：");
    for (int l = 0; l < n; l++) {
        printf("%d ", a[l]);
    }
    printf("\n");
    return 0;
}
