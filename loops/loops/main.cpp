//
//  main.cpp
//  Loops
//
//  Created by K24P on 3/9/20.
//  Copyright © 2020 K24P. All rights reserved.
//  There are three number of loops. "while", "do while" and "for"
//  Print number 1 through 10 <-- problem

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
//    for (int i = 1; i<= 10; i++) {   //IS A FIXED, PRE-POST LOOP               int i = 1 where I called control variable
//        cout << "value of i is:  " << i << endl;
//        cout << endl;
//    };
//
//    int j = 1;                                              //    #1
//        while (j < 10) {                                     //   is a VARIABLE, PRE-TEST LOOP --->2
//            cout << "value of j is: " << j << endl;
//            j++;                                               //  #3
//        }
//        cout << endl;                                           // break in Output
//
//
//
//
//    int  k = 1;                                           //       #1
//    do {                                                  //   is VARIABLE, POST-TEST LOOP
//        cout<< "value of K is:" << k << endl;
//        k++;                                              //   #3
//    } while (k <=10);                                     //   don't forgot the semicolon  after the while and its condition.   --->2
//    cout << endl;                                          //  break in output
//
//
//     //sentinel or dummy value, true variability
//    int num = 1;
//    char again;
//    cout << "please enter the value of continue:";
//    cin >> again;
//    cout << again;
//    while (again == 'Y') {
//        cout << "The value of number is:" << num << endl;
//        num++;
//        cout << "Do you want to print another number?";
//        cin >> again;
//
//    }
//    cout << endl;  // break in output
//
//
//    char gain = 'Y';
//    int no = 1;
//    
//    do{
//        cout << "the number is:" << no << endl;
//        no--;
//        cout << "Do you want to print another number?";
//        cin >> gain;
//        
//    }while ((gain == 'y') || (gain == 'Y'));
//   
    
    // multiplication  table
    int K;
    cout << " K value table" << endl;
    cin >> K;
    for (int i= 0; i <= 10; i++) {
        cout << K  << " * " <<  i << " = " << K * i<< endl;
    }
 return 0;
}

