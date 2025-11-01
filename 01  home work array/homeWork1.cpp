#include<iostream>
using namespace std ; 

int main(){
    int arr[] = {2,4,6,7,2,5};
    int sum = 0;
    int product = 1;
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        sum += arr[i];
        product *= arr[i];

    }
    
    cout << sum <<endl ;
    cout << product <<endl ;
    return 0 ;

}