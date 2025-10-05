#include<iostream>
#include<cstdlib>
using namespace std;
int partition(int arr[], int low, int high){
	int randomIndex = low + rand() % (high - low + 1);
	swap(arr[high], arr[randomIndex]);
	int piovt = arr[high], j = low - 1;
	for(int i = low; i < high; i++){
		if(arr[i] < piovt){
			j++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[j + 1], arr[high]);
	return j+1;
}
void rQuickSort(int arr[], int low, int high){
	if(low < high){
		int pi = partition(arr, low, high);
		rQuickSort(arr, low, pi-1);
		rQuickSort(arr, pi+1, high);
	}
}

void display(int arr[], int size){
	cout<<"The sorted data is\n";
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int size;
	cout<<"Enter the size of the array\n";
	cin>>size;
	int arr[size];
	cout<<"Enter the data into it\n";
	for(int i = 0; i < size; i++){
		arr[i] = rand() % 100;
	}
	rQuickSort(arr, 0, size-1);
	display(arr, size);
	return 0;
}