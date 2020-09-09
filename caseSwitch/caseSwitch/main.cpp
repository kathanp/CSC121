//
//  Case Switch statement using all previous selections as menu items.
// Introducing conditional operator ?: as choise 4.
//  Some limitation are in Switch

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
//    int score = 0; // declare as interger  variable
//    cout << "\n Please enter the value of SCORE:    ";
//    cin >> score; // get the score
//    cout << "\n here is the value you enter:        " << score << endl;
//
//
//    //prepare the code for menu
//    cout << "\n what would you like to do with score? \n";
//    cout << "1. Perfect score check \n";
//    cout << "2. Even/Odd Check \n";
//    cout << "3. Letter grade Check \n";
//    cout << "4. Conditional operator used for Even/Odd Check \n";
//    cout << "9. Quit\n";
//    int menu = 0;
//    cin >> menu  ; // get the menu item
//
//    // code the switch statement to repond to the menu
//
//    switch(menu)
//    {
//        case 1: // Perfect Score
//        {
//            if (score == 100) // simple If Else
//                {
//                    cout << "\nPerfect score!!!\n";
//                    cout << "BRAVO! Great!\n";
//                } // end of if
//            break;
//        }         // end of case 1
//        case 2: // EVEN/ODD
//        {
//            if ((score % 2) == 0)
//                {
//                    cout << "\n Score is Even!\n"; // true part
//                }
//            else
//                    cout << "\n Score is ODD!\n"; // false part
//            break;
//        }// end of case 2
//        case 3:
//        {
//            if (score >= 90)  //A
//                cout << "\nLetter Grade is A!\n";
//            else if (score >= 80)  //B
//                cout << "\nLetter Grade is B!\n";
//            else if (score >= 70)  //C
//                cout << "\nLetter Grade is C!\n";
//            else if (score >= 60)  //D
//                cout << "\nLetter Grade is D!\n";
//            else  // F
//                cout << "\nLetter Grade is F!\n";
//            break;
//        }// end of case 3
//
//
//        case 4: // conditional opearator is short form of if then else
//        {
//            // sysntex is ? true Part : False Part
//            ((score % 2) == 0) ?  cout << "\n Score is Even!\n" : cout << "\n Score is ODD!\n" ;
//            break;
//        } //end of the case 4
//
//        case 9:
//        {
//            cout << endl;
//        } // end of the case 9
//
//
//
//
//
//    }
//
//    return 0;
    
    
    int score = 0; // declare as interger  variable
    cout << "\n Please enter the value of SCORE:    ";
    cin >> score; // get the score
    cout << "\n here is the value you enter:        " << score << endl;
    
    
    //prepare the code for menu
    cout << "\n what would you like to do with score? \n";
    cout << "A. Perfect score check \n";
    cout << "B. Even/Odd Check \n";
    cout << "C. Letter grade Check \n";
    cout << "D. Conditional operator used for Even/Odd Check \n";
    cout << "Z. Quit\n";
    char menu;
    cin >> menu  ; // get the menu item
    
    // code the switch statement to repond to the menu

    switch(menu)
    {
        case 'A': // Perfect Score
        case 'a':
            {
                if (score == 100) // simple If Else
                    {
                        cout << "\nPerfect score!!!\n";
                        cout << "BRAVO! Great!\n";
                    } // end of if
                break;
            }         // end of case 1
                
            
            
        case 'B': // EVEN/ODD
        case 'b':
            {
                if ((score % 2) == 0)
                    {
                        cout << "\n Score is Even!\n"; // true part
                    }
                else
                        cout << "\n Score is ODD!\n"; // false part
                break;
            }// end of case 2
                
            
        case 'C':
        case 'c':
            {
                if (score >= 90)  //A
                    cout << "\nLetter Grade is A!\n";
                else if (score >= 80)  //B
                    cout << "\nLetter Grade is B!\n";
                else if (score >= 70)  //C
                    cout << "\nLetter Grade is C!\n";
                else if (score >= 60)  //D
                    cout << "\nLetter Grade is D!\n";
                else  // F
                    cout << "\nLetter Grade is F!\n";
                break;
            }// end of case 3
            
            
        case 'D': // conditional opearator is short form of if then else
        case 'd':
            {
                // sysntex is ? true Part : False Part
                ((score % 2) == 0) ?  cout << "\n Score is Even!\n" : cout << "\n Score is ODD!\n" ;
                break;
            } //end of the case 4
                
        case 'Z':
        case 'z':
            {
                cout << endl;
            } // end of the case 9
                
            
            
            
            
    }
    
    return 0;
}
