#include<iostream>
using namespace std;
int main(){
    int arr[]={3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/4;
    int arrsum = 0;
    int max = 0 ;
    for (int i = 0; i < size; i++)
    {   arrsum = 0;
        for (int j = i; j < size ; j++)
        {
            arrsum += arr[j];
            if (arrsum > max)
            {
                max = arrsum;
            }
            
        }
        
    }
    cout << max ;
    return 0;
    
}