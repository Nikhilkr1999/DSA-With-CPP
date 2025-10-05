#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<pair<int,string>> vp;//vactor of pair decleared 
	int size;
	//taking the size of vp
	cout<<"Entert the size to be stored in pair"<<endl;
	cin>>size;
	int i;
	//Enserting the value in to the vp
	for(i=0; i<size; i++){
		int roll;
		string s;
		cout<<"Enter the roll and name"<<endl;
		cin>>roll>>s;
		vp.push_back({roll,s});
	}
	cout<<"The given pairs are given below\n";
	//printing the vp value on console
	for(i=0; i<size; i++){
		cout<<vp[i].first<<" "<<vp[i].second;
		cout<<endl;
	}
	return 0;
}