#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,5,6,4,3};
    int n=6;
    int piv = -1;
    for (int i = n-2; i >= 0; i--)
    {
        if (arr[i] < arr[i+1])
        {
            piv = i;
            break;
        }
        
    }
    if (piv==-1)
    {   
        for (int str = 0,end=n-1; str<end; str++,end--)
        {
            swap(arr[str],arr[end]);

        }
        
    }
    for (int i = n-1; i > piv; i--)
    {
        if (arr[piv]<arr[i])
        {
            swap(arr[i],arr[piv]);
            break;
        }
        
    }
    for (int str = piv+1,end=n-1; str<end; str++,end--)
        {
            swap(arr[str],arr[end]);

        }

    for (int i = 0; i <= n-1; i++)
    {
        cout << arr[i] << endl;

    }
    
    
}