#include<iostream>
using namespace std;

void heapify(int arr[], int i, int size){
	int left = 2 * i + 1;
	int right =  2 * i + 2;
	int large = i;
	if(left < size && arr[left] > arr[large]){
		large = left;
	}
	if(right < size && arr[right] > arr[large]){
		large = right;
	}
	if(large != i){
		swap(arr[i], arr[large]);
		heapify(arr, large, size);
		
	}
}
void maxHeap(int arr[], int size){
	for(int i = (size)/2 - 1; i >= 0; i--){
		heapify(arr, i, size);
	}
}
void heapSort(int arr[], int size){
	for(int i = size -1; i >= 0; i--){
		swap(arr[i], arr[0]);
		heapify(arr, 0, i);
	}
}
void display(int arr[], int size){
	cout<<"The heapify data is\n";
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int size;
	cout<<"Enter the size of the array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the element into it\n";
	for(int i = 0; i < size; i++){
		arr[i] = rand() % 100;
	}
	maxHeap(arr, size);
	heapSort(arr,size);
	display(arr,size);
	return 0;
}