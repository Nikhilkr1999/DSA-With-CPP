#include<iostream>
#include<cstdlib>
using namespace std;

int findMax(int arr[], int size){
	int max = arr[0];
	for(int i = 0; i < size; i++){
		if(max < arr[i]) max = arr[i];
	}
	return max;
}

void countSort(int arr[], int size, int exp){
	int freqArr[10] = {-1};
	int outputArr[size];
	for(int i = 0; i < size; i++){
		freqArr[(arr[i]/exp) % 10]++;
	}
	for(int i = 1; i < 10; i++){
		freqArr[i] += freqArr[i-1];
	}
	for(int i = size - 1; i >= 0; i--){
		outputArr[freqArr[(arr[i] / exp) % 10] ] = arr[i];
		freqArr[(arr[i] /exp) % 10]--;
	}
	for(int i = 0; i < size; i++){
		arr[i] = outputArr[i];
	}
}

void radixSort(int arr[], int size){
	int exp = 1;
	int max = findMax(arr, size);
	for(exp; max/exp > 0; exp *= 10){
		countSort(arr, size, exp);
	}
}

void display(int arr[], int size){
	cout<<"The data is in sorted order\n";
	for(int i = 0; i < size; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int size;
	cout<<"Enter the size of the array\n";
	cin>>size;
	int arr[size];
	for(int i = 0; i < size; i++){
		arr[i] = rand() % 1000;
	}
	radixSort(arr, size);
	display(arr, size);
	return 0;
}