//
//  main.cpp
//  function1
//
//  Created by K24P on 4/6/20.
//  Copyright © 2020 K24P. All rights reserved.
//
//code written to perform a single task in a specific format called a FUNCTION


#include <iostream>
using namespace std;

//this is the void function with no parameters. This Function does something inside.
// the function body


void Header();                                              // called function prototype

int main(int argc, const char * argv[]) {
   
    Header();                                               // void function can be called on a line by it self.
    return 0;
}


void Header()                                               // function header MUST MATCH the prototype
{                                                           // function Body
    cout << "\nFunction that does somthing!!!" << endl;
}

