#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,2,1,1};
    int  fre = 0;
    int ans =0 ,n= sizeof(arr)/2;
    for (int i = 0; i < n; i++)
    {
        if(fre == 0){
            ans = arr [i];
        }
        if (arr[i] == ans)
        {
            fre++;

        }
        else{
            fre --;
        }
        
    }
    cout << ans ;
    

}