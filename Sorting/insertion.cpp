#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {4,1,5,2,3};
    int n = 5;
    for (int i = 1; i < n; i++)
    {
        int prev = i-1 , curr = i,curr1 = arr[curr];
        while (prev >= 0 && arr[prev] > curr1)
        {
            
                arr[curr] = arr[prev];
                prev--;
                curr-- ;
        }
       
      
        arr[prev+1] = curr1;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<endl;
    }
    
    return 0 ;
        
}