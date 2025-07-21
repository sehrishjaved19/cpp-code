/* write a program that inputs a grade and salary.it adds 50% bonus if the grade is 
greater than 15,it adds 25% bonus if the grade is less than 15,and then display the total sALARY.*/ 

#include<iostream>
using namespace std;
int main()

{
	int grade;
	float salary;
	float bonus;
	cout<<"Enter your grade in intergers: ";
	cin>>grade;
	cout<<"enter your salary: ";
	cin>>salary;
	if(grade>15)
	{
	bonus = salary*50.0/100.0;
	salary = salary + bonus;
	cout<<"Total salary is "<<salary; 	
	}
	else
	{
	bonus = salary*25.0/100.0;
	salary = salary + bonus;
	cout<<"Total salary is "<<salary;	
	}
	return 0;
}

