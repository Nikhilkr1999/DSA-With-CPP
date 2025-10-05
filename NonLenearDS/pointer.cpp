#include<iostream>
//#include<string>
using namespace std;
/*void findNum(int n){
	if(n==0){
		return;
	}
	int res=n%10;
	n=n/10;
	findNum(n);
	cout<<res<<endl;
}

int main(){
	int num=12345;
	findNum(num);
	return 0;
}
*/
int main(){
	string input;
	string myString("Nikhil");
getline(cin, input); // Read a line of input into 'input'
cout << "Output: " << myString << endl; // Output the string

	return 0;
}