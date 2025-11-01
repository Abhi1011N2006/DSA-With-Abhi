#include <iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(string str){
    int i = str.length()-1;
    int power = 0 ,res =0 ;
    while (i >= 0){
        int ele = str[i] - '0';
        int binary = ele *(int)pow(2,power);
        res += binary ;
        power++;
        i--;

    }
    
    return res ;



}


int main() {
    int dec , rem , res =1;
    string str="" ;
    cout << "Enter the decimal number :"  ;
    cin >> dec ;

    while (dec != 0)
    {
        rem = dec % 2;
        str.insert(0, to_string(rem)) ;
        dec = dec /2 ;
         
    }
    cout << str << endl;   
    cout<< binaryToDecimal(str) <<endl;
    return 0;
}
