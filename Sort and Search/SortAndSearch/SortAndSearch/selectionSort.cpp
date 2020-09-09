//
//  main.cpp
//  SortAndSearch
//
//  Created by K24P on 5/11/20.
//  Copyright © 2020 K24P. All rights reserved.
//  Selection Sort

#include <iostream>
using namespace std;


void selectionSort(int list[], int length)
{
    int index, smallestIndex, minIndex, temp,  count = 0;
    
    for (index = 0; index < length-1; index++)                                      //pass
    {
        // step a
        smallestIndex = index;
        
        for (minIndex = index +1 ; minIndex < length; minIndex++)                   //pass
            if (list[minIndex] < list[smallestIndex]) {
                smallestIndex = minIndex;
            }
        //step b                                                                    //swap
            temp = list[smallestIndex];
            list[smallestIndex] = list[index];
            list[index] = temp;
        count++;                                                                    //count the swaps
        
    }
    
    cout << "\n total number of Swaps:       " << count << endl;
    
}
int main(int argc, const char * argv[]) {
    
    int i, list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
    //int i, list[] = { 1, 2, 3,4 ,5 ,6,  11, 10 , 9, 8 };
    
    cout << "Before selection sorting, the array elements are:" << endl;
    for (i = 0; i < 10; i++) {
            cout << list[i] << " ";
    }
     
        selectionSort(list, 10);
        
        cout << "\n AFTER SELECTION sorting, the array elements are:" << endl;
    for (i = 0; i < 10; i++) {
        cout << list[i] << " ";
    }
        cout << endl;
    return 0;

   
}

    

