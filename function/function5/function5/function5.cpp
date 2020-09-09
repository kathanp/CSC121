//
//  main.cpp
//  function5
//
//  Created by K24P on 4/8/20.
//  Copyright © 2020 K24P. All rights reserved.
//
#include <iostream>

#include <string>

using namespace std;



string middle(string i ){

    int64_t i = str.length();

           if((( i = str.length()/ 2) % 2) >= 0){                                                      //         for even

                   cout << str[i-1];

}

           if((( i = str.length()/ 2) % 2) >= 1){                                                      //         for ODD

                   cout << str[i];

}

return str;

}



int main(){

string input;

cout << "Enter the word to print the middle character:";

cin >> input;

int64_t i = input.length();

string result = middle(str i);

cout << "The middle char is:" << i << endl;

system("pause");

return 0;

}



