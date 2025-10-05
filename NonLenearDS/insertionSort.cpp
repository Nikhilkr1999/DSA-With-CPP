#include<iostream>
using namespace std;
void insertionSort(int arr[], int size){
	int i=0,j;
	while(i<size-1){
		if(arr[i]>arr[i+1]){
			j=i+1;
			while(j>0){
				if(arr[j]<arr[j-1]){
					swap(arr[j-1],arr[j]);
					j--;
				}
				else{
					break;
				}
			}
		}
		i++;
	}
}

int main(){
	int arr[10]={3,100,4,5,6,4,3,2,33,5};
	int size=10;
	insertionSort(arr,size);
	for(auto i:arr){
		cout<<i<<" ";
	}
	return 0;
}