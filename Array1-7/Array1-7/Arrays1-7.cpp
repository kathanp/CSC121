//  Array1-7
//  write a program he takes in five numbers, print the total nd average of those number
//  Created by K24P on 5/2/20.
//  Copyright © 2020 K24P. All rights reserved.
//#1

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    float avg = 0.0;
    int Num1, Num2, Num3, Num4, Num5, total;
    cout << "Please ente the five number \n";
    cin >> Num1 >> Num2 >> Num3 >> Num4 >> Num5;                                // get he num
    total = Num1 + Num2 + Num3 + Num4 + Num5;                                   // Accumulator
    avg = total/ 5;
    cout << "The Total is:" << total << endl;
    cout << "The average is:" << avg <<endl;
    cout << endl;

    return 0;
}



// #2
//REDO the above with ARRAY
//#include <iostream>
//using namespace std;
//
//int main(){
//    int num[5], total=0, i = 0;                       // declare the name of the array and and put in the square brackets
//    float ave = 0.0;
//    for(i =0; i < 5; i++){                           // index of the array always starts at 0, goes up to size-1
//        cout << "Please enter the number       ";
//        cin >> num[i];
//        total = total += num[i];                     // accumulator
//    }
//    ave = total/i;                                   //  i is the control variables also acting as counter
//    cout << "The Total is:" << total << endl;
//    cout << "The average is:" << ave <<endl;
//    return 0;
//}


//3
//read/populate, manipulate, print an array
//we need three loops
//Get five numbers from the users and double their values using an arrays and print them


//#include <iostream>
//using namespace std;
//
//int main(){
//
//    int num[5], i;
//    for(i=0; i < 5; i++){                                   // loop to read/populate/load the array
//        cout << "Please enter the number      ";
//        cin >> num[i];
//    }
//    cout << "\nHere are the ORIGINAL VALUES of the array\n";
//
//    for (int i = 0; i < 5; i++) {
//        cout << num[i] << endl;                            //loop to print the ORIGINAL VALUES of the ar
//    }
//    cout << endl;
//
//    for (int i = 0; i<5; i++) {                             //loop to manipulate the array(double the values)
//        num[i] = num[i] * 2;
//
//    }
//    cout << "\tHere is the DOUBLE VALUES o the arrays\n";
//    for(i=0; i < 5; i++){                                   //loop to print the value of the array
//        cout << num[i] << endl;
//    }


// instead of having 4 loops, We reduce it to 3 with this loop. However, it just worked in this
//    cout << "\tHere is the DOUBLE VALUES o the arrays\n";
//    for (int i = 0; i<5; i++) {                             //loop to manipulate the array(double the values)
//        num[i] = num[i] * 2;
//        cout << num[i] << endl;
//     }
//    cout << endl;
//    return 0;
//}




//#4
//SAMPLE CHAR ARRAY

//#include <iostream>
//using namespace std;
//
//int main(){
//    char grade[] = { 'A', 'B', 'C', 'D', 'F'};                // declaration and initialiation on the same line
//    cout << "\nHere are the grades in the arrays\n";
//    for(int i =0; i<5; i++){
//        cout << grade[i] << endl;
//    }
//    cout << endl;
//    return 0;
//
//
//}

// #5
// TWO DIMENTION ARRAYS

//#include <iostream>
//using namespace std;
//
//int main(){
//    int num[3][3];                              // {1,2,3,4,5,6,7,8,9};   num[r][c] first dimention is row // second dimention is column
//
//    for (int r=0; r < 3; r++)
//    {
//       for (int c=0; c < 3; c++)
//       {
//           cin >> num[r][c];
//       }
//    cout << endl;
//    }
//
//    for (int r =0; r < 3; r++)
//    {
//       for (int c =0; c < 3; c++)
//       {
//           cout << num[r][c] << "\t";
//       }
//        cout << endl;
//    }
//    return 0;
//}


// #6
// GET VALUES from user for two dimention array and PRINT it in the form of a TABLE/MATRIX,
// THen DOUBLE the values

//#include <iostream>
//using namespace std;
//
//int main(){
//    int num[3][3];                              // {1,2,3,4,5,6,7,8,9};   num[r][c] first dimention is row // second dimention is column
//    cout << "\nplease enter the values for two dimention array of size 3 * 3\n";
//    for (int r=0; r < 3; r++)
//    {
//       for (int c=0; c < 3; c++)
//       {
//           cin >> num[r][c];
//       }
//    }
//    cout << endl;
//
//    for (int r =0; r < 3; r++)
//    {
//       for (int c =0; c < 3; c++)
//       {
//           cout << num[r][c] << "\t";
//       }
//        cout << endl;
//    }
//
//    cout << "\nHere is the DOUBLE VALUES of the arrays\n";
//    for (int r =0; r < 3; r++)                                          // nested loop to double the values
//    {
//       for (int c =0; c < 3; c++)
//       {
//           num[r][c] = (num[r][c] * 2);
//             cout << num[r][c] << "\t";
//       }
//        cout << endl;
//    }
    
//    for (int r =0; r < 3; r++)
//    {
//       for (int c =0; c < 3; c++)
//       {
//           cout << num[r][c] << "\t";
//       }
//    cout << endl;
//    }
//
//      return 0;
//}

// #7
// PARELLEL ARRAYS

//#include <iostream>
//#include <string>
//using namespace std;
//
//int main(int argc, const char * argv[]) {
//    string name[3];
//    char grade[3];                                                  //same size as previous array as there will be processed as parallel arrays
//                                                                    // index values correspond to each other in both arrays
//    cout << "Please enter the name followed by the grade: \n";
//    for (int i =0; i < 3; i++) {
//        getline(cin, name[i]);                                      // instead of doing just cin >> name[i] >> grade[i]
//                                                                    // use getline and cin.ignore() so you can enter first and last name
//        cin >> grade[i];
//        cin.ignore();                                               // otherwise takes enter as the next name
//    }
//
//    for (int i = 0; i < 3; i++) {
//        cout << name[i] << "\t" << grade[i] << endl;
//    }
//    return 0;
//}





