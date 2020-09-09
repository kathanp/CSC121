//
//  main.cpp
//  fibonacciSequence
//
//  Created by K24P on 3/10/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int  nth;
    int n0 = 0;
    int n1 = 1;
    cout << "nth term of the sequence:";
    cin >> nth;
    
    for (int nth = 0  ;  < nth  ; nth++) {
       
        nth = ((nth - 1) + (nth- 2));
        cout << nth ;
    return nth;
    }}
