#include<iostream>
#include<vector>
using namespace std;
int main(){
	//declearing the 2d vector 
	vector<vector<int>> v;
	cout<<"Enter the size of row and col"<<endl;
	//taking the size of row and col
	int row,col;
	cin>>row>>col;
	cout<<"Enter the num"<<endl;
	//inserting the all values into the v
	for(int i=0; i<row; i++){
		//taking one temp v to take the all values of one row
		vector<int>temp;
		for(int j=0; j<col; j++){	
			int num;
			cin>>num;
			temp.push_back(num);
		}
		//Now pushing the temp into the v
		v.push_back(temp);
	}
	cout<<"Now i am printing the values which you have given to me"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}