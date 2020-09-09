//
//  main.cpp
//  bubbleSort
//
//  Created by K24P on 5/11/20.
//  Copyright © 2020 K24P. All rights reserved.
//

#include <iostream>
using namespace::std;

void   bubbleSort(int list[], int length)
{
    int temp, iteration, index, count = 0;
    for (iteration = 1; iteration < length; iteration++) {
        for (index = 0; index < length - iteration; index++) {
            if (list[index] > list[index + 1])                                      //swap if necessary
            {
                temp = list[index];
                list[index] = list[index +1];
                list[index+1]  = temp;
                count++;                                                            // counting swap
            }
        }
    }
    cout << "Total number of swaps ---->    " << count << endl;
    
}

int main(int argc, const char * argv[]) {
    
    //int i, list[] = {2, 56, 34, 25, 73, 46, 89, 10, 5, 16};
    int i, list[] = { 1, 2, 3,4 ,5 ,6,  11, 10 , 9, 8 };
    
    cout << "Before bubble sorting, the array elements are:" << endl;
    for (i = 0; i < 10; i++) {
            cout << list[i] << " ";
    }
     
        bubbleSort(list, 10);
        
        cout << "\n AFTER bubble sorting, the array elements are:" << endl;
    for (i = 0; i < 10; i++) {
        cout << list[i] << " ";
    }
        cout << endl;
    return 0;
    

}
