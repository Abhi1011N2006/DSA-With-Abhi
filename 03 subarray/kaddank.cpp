#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int sum=0,maxValue=0, size=sizeof(arr)/4;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        maxValue =max(sum , maxValue);
        if (sum < 0 )
        {
            sum = 0;
        }
        
    }
    cout << maxValue ; 
    return 0 ;
    
}