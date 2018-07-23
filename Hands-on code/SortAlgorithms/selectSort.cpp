#include<stdio.h>

void selectSort(int *arr, int n){
	for(int i = 0; i < n; i++){
		int key = i;

		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[key]){
				key = j;
			}
		}

		if(key != i){
			int tmp = arr[key];
			arr[key] = arr[i];
			arr[i] = tmp;
		}
	}
}

int main() {
    int a[] = { 12,4,15,2,6,22,8,10,1,33,45,24,7 };
    int n = sizeof(a) / sizeof(int);
    selectSort(a, n);
    printf("排序好的数组为： ");
    for (int k = 0; k < n; k++)
        printf("%d ", a[k]);
    printf("\n");
    return 0;
}
