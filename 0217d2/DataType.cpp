# include <iostream>
#include <string>
using namespace std;

int main()      // Single line comment -->main is sn entry door from os into program --> function header
{ // function body begins with opening brace
    int stdId;      /*start of the Multi-line comments
                    declaration variable by name StdId -->sets aside the space for the variable 
                    this location currently has GARBAGE value in it   */

    stdId = 5555;  //initializing the value --> every C++ statement MUST end with
    float gpa = 3.52; //declaration and initialization at the same time
    //= is an assignment operator LHS of the assignment operator is a VARIABLE, RHS is a value 
    string stdFname = "john";
    string stdLname = "smith";
    char stdGrade = 'C';
    bool tuitionPaid = true;
    double hairSize = 0.000000005474;



    //print this data out
    cout << "STUDENT INFORMATION\n" << endl;
    cout << "First name:\t" << stdFname <<endl;
    cout << "Last name:\t" << stdLname <<endl;
    cout << "ID:\t" << stdId << endl;
    cout << "Grade:\t" << stdGrade <<endl;
    cout << "GPA:\t" << gpa <<endl;
    cout << "tuitionPaid:\t" << tuitionPaid <<endl;
    cout << "Last name:\t" << stdLname <<endl;
   





    return 0;  //closing door going back to os --> PRESS ANY KEY MESSAGE 

} //function ends