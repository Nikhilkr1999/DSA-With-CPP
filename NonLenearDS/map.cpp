#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Student{
	public: 
	int roll;
	string name;

	bool operator==(const Student& other) const{
		cout<<"Inside equal method\n";
		return (name == other.name) && (roll == other.roll);
	}
};

class MyKeyHash{
	public:
	size_t operator()(const Student& stu) const{
		cout<<"Inside hashing method\n";
		return stu.roll;
	}
};

int main(){
	unordered_map<Student , int, MyKeyHash> umap;
	Student st{1, "kirti"};
	Student st1{2, "Ram"};
	umap [st]= 345;
	umap[st1] = 546;
	cout<<"\n"<<umap[st] << "  " <<umap[st];
	return 0;
}