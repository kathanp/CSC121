//
//  main.cpp
//  Structure
//
//  Created by K24P on 4/15/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//Defination
//record ---> stdId sname  sgrade sbirth
struct label                                                            //This is Just a TEMPLATE no memory is assignned or variables created
{
    string fname;                                                       // member of label
    string lname;                                                       // member of label
    int zip;                                                            // member of label
    
};                                                                      // Don't forgot semi-colon. This makes it the DEFINATION


void print(label);
void Getinput(label&);


void print(label p)
   {
       cout << p.fname << "\t" << p.lname << endl;
       cout << p.zip << endl << endl;
   };
   
void Getinput(label& p)
{
    cout << "Enter the person first name, last name and zip code:  " << endl;
    getline(cin, p.fname);
    getline(cin, p.lname);
    cin >>  p.zip;
    cin.ignore();

}


int main(int argc, const char * argv[]) {
    
    label mailing, person;                                              //  Declared two variable of type label
    Getinput(person);                                                   //   We have data for person
    print(person);
    mailing.fname = "John";                                           //  This is called dot notation
    mailing.lname = "Smith";
    mailing.zip = 60056;
    print(mailing);
    
    Getinput(mailing);
    return 0;
    
   
}
