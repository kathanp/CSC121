//  one way communication only
//  VARIABLES --> LOCAL/GLOBAL

//  main.cpp
//  function2
//
//  Created by K24P on 4/7/20.
//  Copyright © 2020 K24P. All rights reserved.


#include <iostream>
#include <string>
using namespace std;
 /* This is void fuction with a single string parameter. The parameter is passed
by value to the function and the function does not return any values. */

int x = 25;                                                          // Global variable --> declare outside the main

void Header(string);                                                 // function PROTOTYPE with string value

int main(int argc, const char * argv[])
{
    Header("\n this value is passed to the function\n");             // #1 function call with literal value OR Constant
     string title =  "\nNow this value is passed to the function\n";
    cout << title << endl;                                           //  Printing value of title before function call
   
    Header(title);                                                   // argument passed to void function -- Actual Paramenter #2 Variable
    
    // Header(("Kathan" + "" + "patel"));                            // #3 sample ( x+3-y) Input value can be EXPRESSION
    
    Header(title.substr(7,10));                                      // #4 Function Call
    cout << title << endl;                                           // Printing value of title after function call
    
    // cout << T << endl;                                            // tring to print T in main
//    x = x+2;
//    cout << x << endl;
    return 0;
}

/* function header must match the prototype, but includes the name of the parameter. This parameter is called
 formal parameter. T is LOCAL variable whose SCOPE is the header function which mean T is not known outside of this
 function and cannot be accessed or changed outside of this function */


void Header(string T){
//    cout << title << endl;                                        //     Trying to print tilte in function
      cout << T << endl;
//    x += 5;
//    cout << x << endl;

}

