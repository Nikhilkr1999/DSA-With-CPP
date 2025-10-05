#include<iostream>
using namespace std;
void concure(int arr,int l,int mid,int r);
void merge(int arr,int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		merge(arr,l,mid);
		merge(arr,mid+1,r);
		concure(arr,l,mid,r);
	}
}
void concure(int arr,int l,int mid,int r){
	int merged[]=new int[l-r+1];
	int idx1=l;
	int idx2=mid+1;
	int x=0;
	while(idx1<=mid && ids2<=r){
		if(arr[idx1]<=arr[idx2]){
			marged[x++]=arr[idx1++];
		}
		else{
			marged[x++]=arr[idx2++];
		}
	}
	while(idx1<=mid){
		marged[x++]=arr[idx1++];
	}
	while(idx2<=r){
		marged[x++]=arr[idx2++];
	}
	for(int i=0; i<10; i++){
		arr[i]=merged[i];
	}
}
int main(){
	int arr[10]={2,3,6,4,3,8,5,7,8,0};
	int l=0,r=9;
	merge(arr,l,r);
	for(int i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}