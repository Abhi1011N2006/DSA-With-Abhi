#include<iostream>
using namespace std;
int main(){
    int num = 3568;
    while (num!=0)
    {
        int digit  = num%10;       //Time complexity :- O(log10(n))
        cout << digit << endl;
        num = num / 10;
    }
    
}