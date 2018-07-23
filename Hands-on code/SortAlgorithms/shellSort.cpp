//缩小增量排序
#include<stdio.h>

void shellSort(int *arr, int n){
	int dk = n / 2;
	
	while(dk >= 1){
		for(int i = dk; i < n; i++){
			int j = i - dk;
			int tmp = arr[i];

			if(arr[j] > arr[i]){
				while(j >= 0 && tmp < arr[j]){
					arr[j+dk] = arr[j];
					j -= dk;
				}
				arr[j+dk] = tmp;
			}
		}
	
		dk = dk / 2;
	}
}

int main() {
    int a[] = { 11,7,9,22,10,18,4,43,5,1,32};
    int n = sizeof(a)/sizeof(int);
    shellSort(a, n);
    printf("排序好的数组为：");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
