#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
	string name;
	int age;
};

class Student : public Person{
	public:
		string prn_no;
		string department;
	
    void set_data(){
    	
    	cout<<"enter the student name :"<<endl;
    	cin>>name;
    	cout<<"enter the student age :"<<endl;
    	cin>>age;
    	cout<<"enter the student prn number :"<<endl;
    	cin>>prn_no;
    	cout<<"enter the student department :"<<endl;
    	cin>>department;
    	cout<<endl;
	}
	
	void get_data(){
		
			cout<<" the student name :"<<name<<endl;
		    cout<<" the student age :"<<age<<endl;
		    cout<<" the student prn number :"<<prn_no<<endl;
           	cout<<" the student name :"<<department<<endl;
            cout<<endl;
	}
};

class employee : public Person{
	public:
	string emp_id;
	string position;
	
	void set_data(){
    	
    	cout<<"enter the employee name :"<<endl;
    	cin>>name;
    	cout<<"enter the employee age :"<<endl;
    	cin>>age;
    	cout<<"enter the employee employee ID :"<<endl;
    	cin>>emp_id;
    	cout<<"enter the employee position :"<<endl;
    	cin>>position;
    	cout<<endl;
	}
	
	void get_data(){
		
			cout<<" the employee name :"<<name<<endl;
		    cout<<" the employee age :"<<age<<endl;
		    cout<<" the employee prn number :"<<emp_id<<endl;
           	cout<<" the employee position :"<<position<<endl;

	}
};

int main(){
	Student s1;
	cout<<"The information of student is :"<<endl;
	s1.set_data();
	s1.get_data();
	
	employee e1;
	cout<<"The information of employee is :"<<endl;
	e1.set_data();
	e1.get_data();
}
