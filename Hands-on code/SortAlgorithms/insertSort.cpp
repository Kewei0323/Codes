#include<stdio.h>

void insertSort(int *arr, int n){
	for(int i = 1; i < n; i++){
		int j = i - 1;
		int tmp = arr[i];
		
		if(arr[j] > arr[i]){			
			while(j >= 0 && tmp < arr[j]){
				arr[j+1] = arr[j];
				j--;				
			}
			arr[j+1] =tmp;
		}		
	}
}

int main() {
    int a[] = { 11,7,9,22,10,18,4,43,5,1,32};
    int n = sizeof(a)/sizeof(int);
    insertSort(a, n);
    printf("排序好的数组为：");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
