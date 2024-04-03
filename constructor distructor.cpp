#include<iostream>
using namespace std;

class Box{
	int lenght;
	float width;
	int height;
	
    public: Box(){
    	lenght = 10;
    	width = 11;
    	height = 12;
	};
	public: Box(int a){
			height = lenght = width = a;
	};
	public: ~Box(){
		cout<<"the value is distroy!!";
	};
	public: void get_Data(){
		cout<<"the height :";
		cout<<this->height<<endl;
		cout<<"the lenght :";
		cout<<this->lenght<<endl;
		cout<<"the width :";
		cout<<this->width<<endl;
	};
};
	int main()
	{
		Box b1;
		b1.get_Data();
		Box b2(12);
		b2.get_Data();
}
