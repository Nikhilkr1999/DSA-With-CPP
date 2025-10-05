#include<iostream>
#include<vector>
using namespace std;
int main(){
	//using the iterator in this problem
	vector<int> v={2,3,4,5,7};
	vector<int> :: iterator it;
	for(it=v.begin(); it!=v.end(); it++){
		cout<<*it<<endl;
	}
	return 0;
}