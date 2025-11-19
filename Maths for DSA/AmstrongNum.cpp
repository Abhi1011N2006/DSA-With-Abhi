// Amstrong number is number that is equal to the sum of cubes of its digits.
// ex : 153 = 1^3 + 5^3 + 3^3 = 1+125+27 = 153

#include<iostream>
using namespace std;
int main(){
    int num = 153;
    int test = num;
    int sum = 0;
    int digit;
    while (num!=0)              // Time complexity :- O(log10(n))
    {
        digit = num % 10;
        sum+=digit * digit * digit;
        num = num /10; 
    }
    cout << sum << endl;
    if (test == sum)
    {
        cout << "Given number is Amstrong number" << endl;
    }
    else{
        cout << "Not Amstrong Number" << endl;
    }
    
    
}