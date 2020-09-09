//
//  main.cpp
//  avarage
//
//  Created by K24P on 3/11/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    // get the avarage of 3 number entered through keyboard
    int  howmany , total = 0, num;
    
    cout << "how many number you would like to avarage?";
    cin >> howmany;
        
    
    
    for (int i = 0; i < howmany; i++) {   // three statement in for, all in one value,
       cout << "enter the number:";
        cin >> num;
        total = total + num;
       

//
    }
    
    cout  << "your total subject avarage is:" << total / howmany << endl;
    return 0;
}
