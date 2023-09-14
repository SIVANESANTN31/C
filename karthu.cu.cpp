#include <iostream>
using namespace std;
class student_info
{
    int roll_number;
    char student_name[50],grade[2];
    public:
    	void read_data(int count)
    	{
    		cout<<"\n\n------enter student"<<cout+1<<"information--------\n";
    		cout<< "name of the student(max.50 characters only):";
    		cin>>student_name:";
    		cout<<"roll_number:";
    		cout<<"grade(0,A+,A,B+,B,C,D,F):";
    		cin>>grade;
    		cout<<"\n student information with roll number"<<roll_number<<"has saved!";
    	}
    	void display_data(int count){
		      cout<<"\n\n********student"<<count+1<<" information********";
			  cout<<"\nName of the student:" <<student_name;
			  cout<<\nRoll Number:"<<roll_number"  		
    		
    		
		}
	
