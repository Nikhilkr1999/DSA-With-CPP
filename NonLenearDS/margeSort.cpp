#include<iostream>
#include<cstdlib>
using namespace std;
int operationCount = 0;
void marge(int arr[], int s, int mid, int e){
	int lSize = mid - s + 1;
	int rSize = e - mid;
	int left[lSize];
	int right[rSize];
	for(int i = 0; i < lSize; i++){
		left[i] = arr[s + i];
	}
	for(int i = 0; i < rSize; i++){
		right[i] = arr[mid + i + 1];
	}
	int i = 0, j = 0, k = s;
	while(i < lSize && j < rSize){
		if(left[i] < right[j]){
			arr[k] = left[i];
			i++;
		}
		else{
			arr[k] = right[j];
			j++;
		}
		k++;
		operationCount++;
	}
	while(i < lSize){
		arr[k] = left[i];
		k++;
		i++;
		operationCount++;
	}
	while(j < rSize){
		arr[k] = right[j];
		k++;
		j++;
		operationCount++;
	}
}
void margeSort(int arr[], int s, int e){
	if(s < e){
		operationCount++;
		int mid = (s+e)/2;
		margeSort(arr, s, mid);
		margeSort(arr, mid+1, e);
		marge(arr, s, mid, e);
	}
}

void display(int arr[], int n){
	cout<<"The sorted data is \n";
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<"\t";
		if(i%9 == 0 && i != 0) cout<<endl;
	}
}

int main(){
	int n, s = 0;
	cout<<"Enter the size of the array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the element into the array\n";
	for(int i = 0; i < n; i++){
		//operationCount++;
		arr[i] = rand()/100;
	}
	margeSort(arr, s, n-1);
	display(arr, n);
	cout<<"Total number of operation is "<<operationCount;
	return 0;
}