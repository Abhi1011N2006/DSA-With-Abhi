#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int inp,rem,deci;
    cout << "Enter the number";
    cin >> inp;
    int count = 0;
    while(inp>0){
        rem = inp%2;
        inp=inp/2;
        deci=rem*pow(10,count);
        count++;
    }
    return 0;
}