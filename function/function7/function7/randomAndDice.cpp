//
//  main.cpp
//  function7
//
//  Created by K24P on 4/15/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>    // For time()
#include <cstdlib>

using namespace std;

int main()
{
    
    //Sets the seed of the random number generator.
    srand(time(0));
    
    for (int i = 1; i <= 10; i++) {
        int d1 = 1 + rand() % 6;
        int d2 = 1 + rand() % 6;
        cout << d1  << " " << d2 << endl;

    }
    cout << "\n";
    return 0;
}
