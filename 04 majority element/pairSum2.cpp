#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int n = sizeof(arr)/4;
    int tar = 26;
    for (int i = 0 , j =n-1 ; i < j; )
    {   int ps =arr[i]+arr[j] ;
        if (ps == tar)
        {
            cout << "target is sum of" << arr[i] <<","<< arr[j] <<endl;
            break;
        }
        else if (ps>tar)
        {
            j--;
        }
        else if (ps<tar)
        {
            i++;
        }
        
        
        
    }
    
    return 0;
}