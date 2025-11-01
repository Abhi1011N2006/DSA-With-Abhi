#include<iostream>
using namespace std ;
int main(){
    int arr[] = {4,7,8,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    for (int i = 0; i < (size/2); i++)
    {
        swap(arr[i],arr[size-1-i]);

    }
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i] << ",";
   }
   
    
}