//
//  main.cpp
//  salvectPopBack
//
//  Created by K24P on 5/6/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
#include <vector>                                             // mix between array and stack
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<double> salaries;                                  // NO size given. Creates empty vector
    cout << "Please enter salaries, 0 to quit: \n";           // Prompt
    bool more = true;                                         // set flag
    while (more) {
        double s;
        cin >> s;                                             // get salary
        if (s == 0) {                                         // if salary is 0
            more = false;                                     // flig the flag
        }
        else {
            salaries.push_back(s);                            // add to the end of vactor
        }
    }
    
    double highest = salaries[0];                             // set first as high
    int i;
    for (i = 1; i < salaries.size(); i++)                     // use size function instead of actual size value
    {
        if (salaries[i] > highest) {                          // test each value against the highest
            highest = salaries[i];                            // if new high found, replace it
        }
    }
        
    for (i = 0; i < salaries.size(); i++)
    {
        cout << salaries[i];                                  // print vactor values
        if (salaries[i] == highest) {                         // compare to highest value
            cout << " <== highest value";                     // if found mark it
        }
        cout << "\n";                                         // Generate newline in output
    }
    
    cout << "\n New list with the last numbr removed\n\n";
    salaries.pop_back();                                      // Remove item from the list
    for (i =0; i < salaries.size(); i++)
    {
        cout << salaries[i] << endl;                          // Print vector values
    }
    
    
    return 0;
}
