
#include<iostream>
using namespace std;
void selectionSort(int arr[], int size){
	int min,tempIndex,flag=0;
	//sorting the array using flag...
	for(int i=0; i<size; i++){
		min=arr[i];
		for(int j=i+1; j<size; j++ ){
			if(min>arr[j]){
				min=arr[j];
				tempIndex=j;
				flag=1;
			}
		}
		if(flag){
			arr[tempIndex]=arr[i];
			arr[i]=min;
			flag=0;
		}
	}
}
int main(){
	//creation of an array and initialiging array of 10 size;
	int arr[10]={420,100,13,17,16,19,10,12,15,8};
	int size=10;
	//calling the selection sort method with passing array and size;
	selectionSort(arr,size);
	//after sorting the array printing array using auto key word
	cout<<"Printing the sort array:- ";
	for(auto i:arr){
		cout<<i<<" ";
	}
	return 0;
}