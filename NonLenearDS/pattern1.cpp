#include<iostream>
using namespace std; 
int main(){
	int row,col;
	cout<<"Please enter the row and col \n";
	cin>>row>>col;
	for(int i=0; i<row; i++){
		for(int j=0; j<col+2; j++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	return 0;
}