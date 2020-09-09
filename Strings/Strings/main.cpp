/* String Topics: String Input, reading strings
    string functions -->>getline()
    cin.ignore()
    Length of a string ----> length()
    substr() to extract sub strings
    Concatination
 **/

#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int stdId = 0;
    string name = ""; //Initializing string to empty string
    double gpa = 0.0;
    
    cout << "\nPlease enter the values......"  << endl; //prompt the user to enter data
    cout << "Enter the Id: ";
    cin >> stdId;
    cin.ignore(); //get rid of ClOG==(ENTER AFTER id)
    cout << "Enter the full name:";
    // cin >> name;  //cin can be used to read a one-word string
    getline(cin, name); // for reading multiple words---> use getline()
    cout << "enter the gpa:  ";
    cin >> gpa;
    
    //Prepare to display
    cout << "\nhere are the values" << endl;
    cout << "\nstudent ID: \t" << stdId << endl;
    cout << "\nStudent name: \t" << name << endl;
    cout << "\nThe student's name is  " << name.length() << " Characters long" <<endl;
    cout << "\nenter the gpa: \t " << gpa << endl;
    
    // more functions
    
    string fname = name.substr(0,6); // 0 is the starting index and 7 is number of character to extract
    string lname = name.substr(7); // with single parameter we are saying where to start and get everything after that
    cout << "First name:" << fname << endl;
    cout << "Last name: "<< lname << endl;
    
    cout << "using concatination to get the full name:  " << fname + " " + lname<< endl;
    


    return 0;
}
