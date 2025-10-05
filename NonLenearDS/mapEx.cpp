#include<iostream>
#include<map>//importing the map in to our file
#include<string>//this is also importing it
using namespace std;
int main(){
	map<string,int>mp;//declear the map with there data type
	mp["Nikhil"]=80;//initialization of map
	mp["Rana"]=71;// || || ||
	mp["Rama"]=70;// || || ||
	map<string , int> ::iterator it;//creating the iterator with there data type
	for(it=mp.begin(); it!=mp.end(); it++){// using 'it' iterating the map and printing 
		cout<<(*it).first<<" "<<(*it).second<<"\n";
	}
	return 0;
}