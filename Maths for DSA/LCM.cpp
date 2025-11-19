// LCM :- Lowest common multiple
#include<iostream>
using namespace std;
int GCD(int num1 ,int num2){
     if (num1 == 0) return num2;
    if (num2 == 0) return num1;
    if (num1>num2)
    {
       return GCD(num1%num2 , num2);        
    }
    else{
        return GCD(num1,num2%num1);
    }
    
    
}
int main(){
    int num1=20,num2=28;
    int gcd =  GCD(num1 ,num2);
    cout << "The GCD is : " << gcd << endl;
    int LCM =( num1* num2) / gcd;
    cout << LCM ;
}