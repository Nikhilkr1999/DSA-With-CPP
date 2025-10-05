#include<iostream>
using namespace std;
int n=50;
int main (){
	int col,row,i,j;
	cout<<"Enter the r and c \n";
	cin>>row>>col;
	for(i=0; i<row; i++){
		
		if(i==0 or i==row-1){
			for(j=0; j<col; j++){
				cout<<"*  ";
			}
		}
		
		else{
			for(j=0;j<col; j++){
				if(j==0 or j==col-1){
					cout<<"N ";
				}
				else{
					cout<<n<<" ";
				}
			}
		}
		cout<<endl;
	}
	return 0;
}