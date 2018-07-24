#include<stdio.h>
#include<limits.h>

void mergeArr(int *arr, int left, int mid, int right){
	int len = right - left + 1;
	int *tmp = new int[len];

	int k = 0;
	int i = left;
	int j = mid + 1;

	while(i <= mid && j <= right){
		tmp[k++] = arr[i] <= arr[j] ? arr[i++] : arr[j++];
	}

	while(i <= mid){
		tmp[k++] = arr[i++];
	}

	while(j <= right){
		tmp[k++] = arr[j++];
	}

	for(int k = 0; k < len; k++){
		arr[left++] = tmp[k];
	}

}

void mergeSort(int *arr, int left, int right){
	if(left == right){
		return;
	}

	int mid = (left + right) / 2;
	mergeSort(arr, left, mid);
	mergeSort(arr, mid + 1, right);
	mergeArr(arr, left, mid, right);
}



int main() {
    int a[] = { 5,1,9,2,8,7,10,3,4,0,6 };
    int n = sizeof(a) / sizeof(int);
    mergeSort(a, 0, n - 1);
    printf("排序好的数组为：");
    for (int k = 0; k < n; ++k)
        printf("%d ", a[k]);
    printf("\n");
    return 0;
}
