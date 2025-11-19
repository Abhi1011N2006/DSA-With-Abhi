#include<iostream>
using namespace std ;
int main(){
     int num1= -121;
     int copy = num1;
    int  newdigit=0;
    while (num1!=0)
    {
        int digit = num1 % 10;
        num1 = num1 / 10;
        newdigit = newdigit * 10;
        newdigit = newdigit + digit;

        
        

    }
    cout << newdigit << endl ;
    if (copy == newdigit)
    {
        cout << "Number is palindromic " << endl;

    }
    else {
        cout << "Not a palinromic number" << endl;
    }
    
 }