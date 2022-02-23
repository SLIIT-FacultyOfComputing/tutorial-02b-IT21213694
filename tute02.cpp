/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream> //header file
using namespace std; // namespace std
int main()//functions main begins program execution
{
   double salary, netSalary; //declare variable
   int etype, otHrs, otRate;
  cout<<"Enter Employee Type :";//display message
  cin>>etype;
  cout<<"Enter Salary :";//display message
  cin>>salary;
  cout<<"Enter OtHrs :";//display message
  cin>>otHrs;
   
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }


   netSalary = salary + otHrs* otRate;
  cout<<"Net Salary is :"<<netSalary<<endl;// disolay net salary
   
  
   return 0;
}
