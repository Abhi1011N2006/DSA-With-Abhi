#include<iostream>
using namespace std;

int main(){
    int arr[]={5,15,22,1,-15,24};
    int size = sizeof(arr)/sizeof(int);
    int lar = 0 ;
    for (int i = 0; i < size ; i++)
    {
        if (arr[i]>lar)
        {
            lar = arr[i];
        }
        
    }
    cout << lar << endl ;
    return 0;
    
}