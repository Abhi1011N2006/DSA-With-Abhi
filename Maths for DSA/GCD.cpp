// GCD :- Gretest Common Digits --> Both are Equal
// HCF :- Highest Common Factor _|
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
    int num1=50,num2=100;
    // cout << "Enter the first number : " << endl;
    // cin >> num1;
    // cout << "Enter the second number : " << endl;
    // cin >> num2;
    cout << "The GCD is : " << GCD(num1 ,num2);
}