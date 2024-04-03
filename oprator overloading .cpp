#include<iostream>
#include<list>
using namespace std;

class Youtube{
    public:
	      string name;
	      int subs;
	
	public:
			Youtube(){
			this->name ="None";
			this->subs =0;
		}
		
		Youtube(string name,int subs){
			this->name =name;
			this->subs =subs;
		}
		void set_data(){
			cout<<"enter the channel name"<<endl;
			cin>>this->name;
			cout<<"enter the subscriber"<<endl;
			cin>>this->subs;
		}
	
		void print_data(){
			cout<<"your youtube channel name is :"<<this->name<<endl;
			cout<<"yiur subscribers are :"<<this->subs<<endl;
		}
		
};
class Mycollection{
	public:
    list<Youtube>Mylist;
	void operator+=(Youtube& channel){
		Mylist.push_back(channel);
	} 
};
ostream& operator<<(ostream& COUT,Youtube YT){
    cout<<"the name of channel is : "<<endl;
	COUT<<YT.name;
	cout<<endl;
	   cout<<"the subscriber are : "<<endl;
	COUT<<YT.subs;
	return COUT;
};

ostream& operator<<(ostream& COUT,Mycollection mc){
	for(Youtube YT:mc.Mylist)
	{
		COUT<<YT;
		cout<<endl;
	}
	return COUT;
};



int main(){
    
    Youtube YT1("DKTE",2500);
	Youtube YT2("SIT",250);
	Mycollection mc;
	mc+=YT1;
	mc+=YT2;
	cout<<mc;
	return 0;
}
