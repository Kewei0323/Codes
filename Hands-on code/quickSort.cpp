#include <iostream>
using namespace std;

void quickSort(int a[], int, int);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int array[] = {12, 32, 9, 29, 26, 12, 30, 43, 21, 86, 12, 29, 30,57};
	int len = sizeof(array)/sizeof(array[0]);
	
	cout << "The original array are:" << endl;
	for (int k = 0; k < len; k++){
		cout << array[k] << ",";
	}
	cout << endl;
	
	cout << "The sorted array are:" << endl;	
	quickSort(array, 0, len-1);
	for (int k = 0; k < len; k++){
		cout << array[k] << ",";
	}
	cout << endl;
	
	return 0;
}

//void quickSort(int a[], int left, int right){
//	
//	if (left < right){
//		int x = a[left] , i = left, j = right;
//		while (i < j){
//			
//			while (i < j && a[j] > x){
//				j--;
//			}
//			if (i < j){
//				a[i++] = a[j];	
//			}
//			
//			while (i < j && a[i] < x){
//				i++;
//			}
//			if (i < j){
//				a[j++] = a[i];
//			}			
//		}
//		a[i] = x;
//		quickSort(a, left, i - 1);
//		quickSort(a, i + 1, right);
//	}
//	
//}

void quickSort(int a[], int left, int right) {
	if(left < right){
		int key = a[left], i = left, j = right;
		while(i < j) {
			while(i < j && a[j] >= key) {
				j--;
			}
			if(i < j) {
				a[i++] = a[j];
			}
			
			while(i < j && a[i] < key) {
				i++;
			}
			if(i < j) {
				a[j--] = a[i];
			}			
		}
		a[i] = key;
		quickSort(a, left, i - 1);
		quickSort(a, i + 1, right);
	}
}


