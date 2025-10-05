#include<iostream>
using namespace std; 
int main(){
	pair<int , string> p;// declaration of a pair
	p={1,"Nikhil"};// 1st way to initialization a pair
	p=make_pair(2,"Raju");// 2nd way to initialization a pair
	cout<<p.first<<" "<<p.second;//printing the values usign first and second
	return 0;
}