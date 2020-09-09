//  one way communication only VALUE RETURNING FUNCTION
//  main.cpp
//  function3
//
//  Created by K24P on 4/7/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
using namespace std;
//This is a value function with no parameter. THe Function returns a string datatype
string Header();


int main(int argc, const char * argv[])
{
    /* value returning function must be invoked in a cout or assignment statement
     to "CATCH" the returned value*/
    string T = Header();                                                     // returned value capture in variable
    // string T= "\nThis is the value returened";
    cout << T << endl;                                                       // and then send to console
    cout << Header() << endl;                                                   // returned value directly send to console
    // Header(); <-- this is way only for void functions
    // cout << "\n This is the value returned\n" << endl;
    // Header();                                                               // cannot CALL or INVOKE value returning function on aline by itself
    
    return 0;
}

string Header() // function header
{
    // string title = "\N This value is returned from the function\n";          // local Variable
    // return title;                                                            // returning variable
    return "This is the value returned\n";                                     // returning literal string
    
}
