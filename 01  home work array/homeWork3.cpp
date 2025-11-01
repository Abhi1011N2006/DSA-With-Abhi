#include<iostream>
using namespace std;
int main(){
    int arr[]={23,4,32,34,44,23};
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0 ; j < size; j++)
        {   if (i==j)
        {
            continue;
        }
        
            if (arr[i]==arr[j])
            {
                flag = -1;
            }
            
        }
        if ( flag==0)
        {
            cout << arr[i] << endl ;
        }
        
        
    }
    return 0;
    
}