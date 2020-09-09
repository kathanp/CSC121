// constant and number fomatting and reading input

#include <iostream>
#include <iomanip>
using namespace std;

const float ROI = 3.5;



int main(){
        
    cout << fixed <<  showpoint << setprecision(2);  //sets all floats to be prited in currency format
    
    float amount, interest, endOfYrBal;
        ///< is called stream insertion operator
    cout << "Please enter the amount of the CD:"; //prompt the user
        //>> is called stream extraction operator
    cin >> amount; //get the value from the user through the KEYBOARD
    
    interest = amount * (ROI/100); //Arithmetic expression
    endOfYrBal = amount + interest;
    
 
    cout << "At the end of the Year, the new balance is: " << endOfYrBal << endl;
    
    return 0;
}
