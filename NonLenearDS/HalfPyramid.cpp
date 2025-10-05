#include<iostream>
using namespace std;
int main(){
	int row,col,i,j;
	cout<<"please enter the row and col\n";
	cin>>row>>col;
	for(i=0; i<row; i=i+1){
		for(j=0; j<=i; j++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}