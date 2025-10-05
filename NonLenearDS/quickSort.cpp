#include<iostream>
#include<cstdlib>
using namespace std;
int partition(int arr[], int low, int high){
	int i = low -1;
	int pivot = arr[high];
	for(int j = low; j < high; j++){
		if(arr[j] < pivot){
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[high]);
	return i+1;
}
void quickSort(int arr[], int low, int high){
	if(low < high){
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi-1);
		quickSort(arr, pi + 1, high);
	}
}
void display(int arr[], int size){
	cout<<"The data is in sorted array\n";
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int size;
	cout<<"Enther the size of the array \n";
	cin>>size;
	int arr[size];
	cout<<"Enter the element into it\n";
	for(int i = 0; i < size; i++){
		arr[i] = rand()%100;
	}
	quickSort(arr, 0, size - 1);
	display(arr, size);
	return 0;
}