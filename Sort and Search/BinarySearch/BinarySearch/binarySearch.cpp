//
//  main.cpp
//  BinarySearch
//
//  Created by K24P on 5/11/20.
//  Copyright © 2020 K24P. All rights reserved.
//  Binary Search ----> is a search for a SORTED  list of Data. we sort first and then search it.

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 10;
int binarySearch(const int[], int, int);
void bubbleSort(int[], int);

int binarySearch(const int list[], int listLength, int searchItem){
     
    int mid = 0, first = 0;
    int last = listLength -1;
    bool found = false;
    
    while (first <= last && !found) {
        mid = (first+last) / 2;
        if (list[mid] == searchItem) {
            found = true;
        }
        else
            if (list[mid] > searchItem) {
                last = mid -1;
            } else {
                first = mid +1;
            }
    }
    
    if (found) {
        return mid;
    } else {
        return -1;
    }
}// end binarySearch



int main(int argc, const char * argv[]) {
    
    int index, number, intList[ARRAY_SIZE];
    
    cout << "Enter     " << ARRAY_SIZE << "     integers. " << endl;
    
    for (index = 0; index < ARRAY_SIZE; index++) {
        cin >> intList[index];
    }
    cout << endl;
    
   

    // sort the list
    bubbleSort(intList, ARRAY_SIZE);
    cout << "\nAfter the sorting , the array elements are:" <<endl;
    for (int i = 0; i < 10; i++) {
        cout << intList[i] << " ";
    }
    cout << endl;

    //search the list
    cout << "\n Enter the number to be searched:" ;
    cin >> number;
    cout << endl;
    
    index = binarySearch(intList, ARRAY_SIZE, number);
    if (index != -1) {
        cout << number << "is found at position" << index +1 <<endl;
    }
    else
        cout << number << "is not in the list" << endl;
    
    
    return 0;
}// end main



