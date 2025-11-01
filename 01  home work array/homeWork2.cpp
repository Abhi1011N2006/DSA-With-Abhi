#include<iostream>
using namespace std ;
int main(){
    int arr[]={99,5,23,22,1};
    int min = INT_MAX;
    int mi,ma;
    int max = INT_MIN;
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            ma = i ;
        }
        
        if (arr[i]<min)
        {
            min = arr[i];
            mi = i;
        }
    }
    swap(arr[ma],arr[mi]);
    for (int i = 0; i < sizeof(arr)/4; i++)
    {
        cout << arr[i] <<",";
    }
    
    return 0 ;
}