#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,1,2,3,3,4,4,5,5,6,6};
    int str = 0, end = arr.size()-1;
    while (str <= end)
    {
        int mid = str + (end-str)/2;
        if (arr[mid-1]!= arr[mid] && arr[mid+1] != arr[mid])
        {
            cout << mid << endl ;
            break;
        }
        if (mid%2==0)
        {
            if (arr[mid-1] == arr[mid])
            {
                end = mid-1;
            }
            else{
                str = mid+1;
            }
            
        }
        else{
            if(arr[mid-1]==arr[mid]){
                str = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        
        
    }
    return 0;
    

}