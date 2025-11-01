#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,0,1,1,2,2,2,2,2};
    int n=sizeof(arr)/4;
    // sort(arr,arr+n);  //{1,1,1,2,2}
    int fre = 1;
    int pre = arr[0];
    for (int i = 0; i < n; i++)
    {
        if(i!=0 && arr[i]==pre){
            fre ++;
        }
        else if (arr[i] != pre)
        {
             pre = arr[i];
            fre = 1;
        }
        
           
        
        if (fre > n/2)
        {
            cout << arr[i] <<endl;
            break;
        }
        
    }
    
}