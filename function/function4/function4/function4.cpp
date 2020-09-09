//  two way communication
//  main.cpp
//  function4
//
//  Created by K24P on 4/7/20.
//  Copyright © 2020 K24P. All rights reserved.
//
/*This is a value function with two integer parameter. This function return an integer
 value which is the product of the two number that are passed as parameter */
#include <iostream>
using namespace std;

int Product(int, int);

int main(int argc, const char * argv[])
{
    int n1, n2;
    cout << "Please enter the two integers:";
    cin >> n1 >> n2;
    // n1 and n2 are ACTUAL parameters (argument) VALUES --> constant/variables/ expression/fn call
    cout << "The product of " << n1 << " and " << n2 << " is:  " << Product(n1, n2) << endl;
    return 0;
}

// int Product(int, int);
int Product(int N1, int N2)  // N1 and N2 are FORMAL parameter (parameter) VARIABLES
{
    return (N1 * N2);
}


