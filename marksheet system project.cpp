#include <iostream>
#include <string.h>
#include <windows.h>
#include <conio.h>
using namespace std;

class student{
	private:
		string name, rollno;
 		int PF, ICT, ECC, AP, DS;
		
		float total, per;
	
	public:
		void Get()
		{
			cout <<"\n <><><><><><><><><><><><><><><><><>< FALAK CODES SOLO GROUP ><><><><><><><><><><><><><><><><><>\n";
			cout <<"\n\n";
			cout <<"\n =================================== PROJECT IN C++ (OOP) =====================================\n";
			cout <<"\n";
			cout << "\t\t\t\t " <<" "<< " STUDENT MARKSHEET SYSTEM"<< endl;
			cout << "\t\t\t\t ~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< endl;
			cout << "\n\n";
			cout<< " Enter name of student: ";
 			getline(cin, name);
 			cout << " Enter rollno of student:  ";
 			cin >> rollno;
 			cout << "\n";
			cout << " Enter marks of PROGRAMMING FUNDAMENTALS: ";
			cin >> PF; 
			cout << " Enter marks of INTRODUCTION TO ICT: ";
			cin >> ICT; 
			cout << " Enter marks of ENGLISH COMPOSITION & COMPREHENSION: ";
			cin >> ECC;
			cout << " Enter marks of APLIED PYSICS: ";
			cin >> AP; 
			cout << " Enter marks of DISCRETE STRUCTURES: ";
			cin >> DS; 
		}
		
		void Display(){
			
			cout <<"\n********************************** QUAID-E-AWAM UNIVERSITY ENGINEERING SCIENCE & TECHNOLOGY ****************************";
			cout <<"\n*************************************************** INFORMATION TECHNOLOGY *********************************************";
			cout <<"\n\n========================================================================================================================\n\n";
			cout << "\t\t\t\t "<<" " << "                    MARKS CERTIFICATE " << endl;
			
			cout << "\n\n";
			system("color 0f");
			cout << " Name: " << name << endl;
			cout << " RollNo: " << rollno << endl;
			
			cout << " Grade: 1ST SEMESTER 1ST YEAR" << endl;
			cout << "\n\n";
			cout << " SUBJECT                                     |" <<"    MAX MARKS       |" << "    MIN MARKS       |" << "   OBTAIN MARKS    |" << "   RESULT"<<endl;
			cout << "                                             |" <<"                    |" << "                    |" << "                   |";
			
			cout << "\n PROGRAMMING FUNDAMENTALS                    |" << "       100          |" << "       50           |" << "      " << PF <<"           |    "; S1(PF); 
			cout << "\n INTRODUCTION TO ICT                         |" << "        50          |" << "       25           |" << "      " << ICT<<"           |    "; S2(ICT);
			cout << "\n ENGLISH COMPOSITION & COMPREHENSION         |" << "       100          |" << "       50           |" << "      " << ECC<<"           |    "; S1(ECC);
			cout << "\n APPLIED PHYSICS                             |" << "       100          |" << "       50           |" << "      " << AP <<"           |    "; S1(AP);
			cout << "\n DISCRETE STRUCTURES                         |" << "       100          |" << "       50           |" << "      " << DS <<"           |    "; S1(DS);
			cout <<"\n"; 
			cout << "                                             |" <<"                    |" << "                    |" << "                   |    " ;
			cout << "\n TOTAL                                       |" << "       450          |" << "       225          |" << "      " << total<<"          |    "; PASS(PF,ICT,ECC,AP,DS);
			cout << "\n\n";
			cout<< " Total Marks: " << total <<  endl;
			cout<< " Percentage: " << per << "%" << endl;
	
			if(per>=85)
			cout << " Grade: A+";
			else if(per<85 && per>=75)
			cout << " Grade: A";
			else if (per<75 && per>65)
			cout << " Grade: B+";
			else if(per<=65 && per>=60)
			cout << " Grade: B";
			else if(per<60 && per>=55)
			cout << " Grade: C+";
			else if(per<55 && per>=50)
			cout << " Grade: C";
			else 
			cout << " Grade: Fail";
	
			
	
		}
	
	    void Total()
		{
			total =0;
			total = total + (PF + ICT + ECC + AP + DS);
		}
		
		void Percentage()
		{
			per = (total*100)/ 450;
		}
		
		void S1(int num)
		{
			if(num>=50)
			cout << "Pass";
			else
			cout << "Fail";
		}
		
		
		void S2(int num)
		{
			if(num>=25)
			cout << "Pass";
			else
			cout << "Fail";
		}
		void PASS(int num1,int num2, int num3, int num4, int num5)
		{
			if(num1>=50 && num2>=25 && num3>=50 && num4>=50 && num5>=50)
			{
			cout << "Pass";
		    }
			else
			{
				cout << "Fail";
			}
		}
		
		
		
			
		
};

int main(){
	student stu;
	stu.Get();
	 system("color 0a");
 	cout<<"\n\n\n\t\t\t\tPlease wait Marksheet is being generating\n\n";
 	char a=177, b=219;
 	cout<<"\t\t\t\t";
 	for (int i=0;i<=40;i++)
 	cout<<a;
 	cout<<"\r";
 	cout<<"\t\t\t\t";
 		for (int i=0;i<=40;i++)
 		{
  			cout<<b;
  		for (int j=0;j<=1e8;j++); 
 		}
 
 	
 	
 	
	system("CLS");
	system("color 0f");
	stu.Total();
	stu.Percentage();
	stu.Display();
	getch();
	system("CLS");
	
	
	
	
	
	
	
	
return 0;	
}
