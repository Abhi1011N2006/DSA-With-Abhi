#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"code is running..." << endl;
    vector<int>arr={2,4,7,8,9,37,5,0};
 
    int str=0,end=arr.size()-1;
    while (str<=end)
    {
        int mid = str + (end-str)/2;
        if (mid > 0 && mid < arr.size()-1)
        {
           
            

        if (arr[mid-1]<arr[mid]&& arr[mid] >arr[mid+1])
        {
            cout << arr[mid] << endl ;
            break;
        }
        else if(arr[mid-1]<arr[mid+1])
        {
            str = mid+1;
        }
        else{
            end = mid -1;
        }
        
   

        }
        else{break;}
       
        
        
    }cout << "code exiting";
    return 0;
    
}