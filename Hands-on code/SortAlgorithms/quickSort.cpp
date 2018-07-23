#include<stdio.h>

void quickSort(int arr[], int begin, int end){
	if(begin >= end){
		return;
	}
	int i = begin, j = end;
	int tmp = arr[begin];
	if(i < j){
		while(i < j && arr[j] >= tmp){
			j--;
		}
		if(i < j){
			arr[i++] = arr[j];
		}
		while(i < j && arr[i] < tmp){
			i++;
		}
		if(i < j){
			arr[j--] = arr[i];
		}		
	}
	arr[i] = tmp;
	quickSort(arr, 0, i - 1);
	quickSort(arr, i + 1, end);
}

int main() {
    int a[] = { 10,6,5,7,12,8,1,3,11,4,2,9,16,13,15,14 };
    int n = sizeof(a) / sizeof(int);
    quickSort(a, 0,n-1);
    printf("排序好的数组为：");
    for (int l = 0; l < n; l++) {
        printf("%d ", a[l]);
    }
    printf("\n");
    return 0;
}
