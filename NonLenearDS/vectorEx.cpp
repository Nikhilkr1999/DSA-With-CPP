#include<iostream>
#include<vector>
using namespace std;
int main(){
	int arr[10];// Normal declearation with fixed size;
	vector<int> v;// the size of vector 'v' is dynamically change
	vector<int> v1(10,2);//the 10 is size of v1 and 2 is the value of all 1 to 10 indexes
	cout<<"Enater the num, If you want to exit then press -1"<<endl;
	while(1){
		int num;
		cin>>num;
		if(num==-1)break;
		v.push_back(num);
	}
	int i=0;
	while(i<v.size()){
		cout<<v[i]<<" ";
		i++;
	}
}