/* 1.Start with the simple IF
   2.IF then ELSE statement
   3.IF then ELSE if statement ----> multi pathway
 
 
 
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int score;                                                               // declaration an integer variable
    cout << "Please enter the value for score    ";                          // prompt fo0r user
    cin >> score;                                                            // get the value from user through Keyboard
    cout << "Here is the value you entered for score: " << score << endl;    //ECHO
    
    
//     /*1.Simple IF
//     Testing for perfect score  */
//    if( score == 100)
//     {  // body of it OR blockcode
//        cout << "score is perfect!" << endl;
//        cout << "BRAVO!" << endl;
//        cout << "GREAT" << endl;
//     }


//    /*  2.IF then ELSE
//     Given the score, identify if it is even or odd */
//    if((score % 2) == 0)
//    {  // true body
//        cout << "The score is EVEN!\n\n";
//    }
//    else
//    {   // False body
//        cout << "The score is ODD\n\n";
//    }
//
//    return 0;

//
     /* 3. IF then ELSE if statement ----> multi pathway
     print the letter grade depending on the score value */

    if (score >= 90)
    {
        cout << "your grade is A" << endl;
    }
        else if( score >= 80)
    {
        cout << "your grade is B" << endl;
    }
    else if( score >= 70)
    {
        cout << "your grade is C" << endl;
    }
    else if( score >= 60)
    {
        cout << "your grade is D" << endl;
    }
    else //Default else
    {
        cout << "\nyour are fail in EXAM and your grade is F!!!" << endl;
    }
    /* else if( score >= 60)
    {
        cout << "\nyour are fail in EXAM and your grade is F!!!" << endl;
    } */

//
//    // ALTERNATE LOGIC
//    // Rewrite the above so that choice of F grade id First...
//    if(score < 60)
//    {
//        cout << "\nyour are fail in EXAM and your grade is F!!!" << endl;
//    }
//    else if( score < 70)
//    {
//        cout << "your grade is D" << endl;
//    }
//    else if( score < 80)
//    {
//        cout << "your grade is C" << endl;
//    }
//    else if( score < 90)
//    {
//        cout << "your grade is B" << endl;
//    }
//
//    else //Default else
//    {
//        cout << "\nyour grade is A!!! HUREY" << endl;
//    }
//
//
//
//
//    // USING LOGICAL Opearator
//    if(( score >= 90) && ( score <= 100))
//    {
//        cout << "\nyour grade is A!!! HUREY" << endl;
//    }
//    else if(( score >= 80) && ( score <= 89))
//    {
//        cout << "your grade is B" << endl;
//    }
//    else if(( score >= 70) && ( score <= 79))
//    {
//        cout << "your grade is C" << endl;
//    }
//    else if(( score >= 60) && ( score <= 69))
//    {
//        cout << "your grade is D" << endl;
//    }
//
//    else //Default else
//    {
//        cout << "\nyour are fail in EXAM and your grade is F!!!" << endl;
//    }
//
//
//
//    //coding for Range with logical opearator USING NESTED IF ELSE STATEMENTS
//
//
//    if(( score >= 90) && ( score <= 100))
//        cout << "\nyour grade is A!!! HUREY" << endl;
//    else
//    {
//        if(( score >= 80) && ( score <= 89))
//            cout << "your grade is B" << endl;
//        else
//        {
//            if(( score >= 70) && ( score <= 79))
//                cout << "your grade is C" << endl;
//            else
//            {
//                if(( score >= 60) && ( score <= 69))
//                    cout << "your grade is D" << endl;
//                else
//                    cout << "Your grade is F." << endl;
//            }
//
//        }
//    }


    
}

