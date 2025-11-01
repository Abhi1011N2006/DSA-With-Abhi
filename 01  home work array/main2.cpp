#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int target = 98;
    int flag=0 ;
    for (int i = 0; i < (sizeof(arr)/sizeof(int)); i++)
    {
        if (target ==  arr[i])
        {
            cout << "target element find at index : " << i << endl ;
            flag = 1;
            break;
        }
        
    }

    if (flag != 1)
    {
        cout << "target element not present in given array" << endl ;
    }
    
    
}