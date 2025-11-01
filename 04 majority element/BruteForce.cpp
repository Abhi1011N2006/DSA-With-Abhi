#include<iostream>
using namespace std;
int main(){
    int arr[]={2,2,1,1,1};
    int fre;
    int n = sizeof(arr)/4;
   for(int val:arr){
        fre = 0 ;
        for(int el : arr){
            
            if (el==val)
            {
                fre++;
            }
            
        }
        if (fre > n/2)
        {
            cout << val <<endl ;
            break;
        }
        

   }
   return 0 ;
    
}