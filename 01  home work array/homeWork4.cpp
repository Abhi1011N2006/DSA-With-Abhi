#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,3,4,5};
    int  arr2[]={4,5,6,7};
    for (int i = 0; i < sizeof(arr1)/4; i++)
    {
        for (int j = 0; j < sizeof(arr2)/4; j++)
        {
            if (arr1[i]==arr2[j])
            {
                cout << arr1[i] << ",";
            }
            
        }
        
    }
    return 0;
}