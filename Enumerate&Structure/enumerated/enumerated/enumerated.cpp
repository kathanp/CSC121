//
//  main.cpp
//  enumerated
//
//  Created by K24P on 4/15/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
     
    enum size {SMALL, MEDIUM, LARGE ,EXTRA, SPECIAL};              // defination of what type SIZE is and its DOMAIN
    //           0     1       2       3       4
    
    size mysize, yoursize, hersize, hissize;                        // declaration of variable of type size
    mysize = MEDIUM;
    cout << "My size is: " << mysize << "\n" << endl;
    
    yoursize = size (MEDIUM + 2);                                   // casting---> temporarily changing the datatypes of a variable  to its
                                                                    // compatible type
    cout << "Your size is: " << yoursize << "\n" << endl;
    
    hersize = size (MEDIUM + LARGE);
    cout << "Her size is: " << hersize << "\n" << endl;
    
    hissize = size (LARGE - MEDIUM);
    cout << "Hissize size is: " << hissize << "\n" << endl;
    
    system("pause");
    return 0;
}
