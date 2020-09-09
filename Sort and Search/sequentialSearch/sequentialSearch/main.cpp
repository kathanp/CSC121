//  2, 56, 34, 25, 73, 46, 89, 10, 5, 16
//  main.cpp
//  sequentialSearch / linear search unsorted list/data
//
//  Created by K24P on 5/11/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;

int seqSearch(const int list[], int listLength, int searchItem)
{
    int loc;
    bool found = false;
    
    for (loc = 0; loc < listLength; loc++)
    {
        if (list[loc] == searchItem)
        {
            found = true;
            break;
        }
    }
    if (found) {
        return loc;
    }
    else
        return -1;
}


int main(int argc, const char * argv[]) {
    
    int index, number, intList[ARRAY_SIZE];
    
    cout << "Enter" << ARRAY_SIZE << "Integers." << endl;
    
    for (index = 0; index < ARRAY_SIZE; index++) {
        cin >> intList[index];
    }
    cout << endl;
    
    cout<< "Enter the number to be" << "Searched: ";
    cin >> number;
    
    index = seqSearch(intList, ARRAY_SIZE, number);
    
    if (index != -1) {
        cout << "The #" << number << "is in position" << index +1 << "in the list" << endl;
    }
    else
        cout << "The #" << number << "is not in the list." << endl;

    return 0;
}


