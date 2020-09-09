//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int x =25; // intitial value of x is 25
    x++;  //26
    ++x;  //27
    
    cout << x++ << endl;   //27
    cout << x << endl;  //28
    
    cout << ++x << endl;  //29
    cout << x << endl;  //29
    return 0;
    
}
