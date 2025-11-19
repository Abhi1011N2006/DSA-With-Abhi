#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<char> arr = {'a','a','b','b','b','c','c','c'};
    int n = arr.size();
    // cout<<n;
    int inx= 0;
    for (int  i = 0; i < n; i++)
    {
        char ch = arr[i];
        int count = 0;
        while (i < n && arr[i]==ch  )
        {
            count++;
            i++;
        }
       if(count == 1) arr[inx++] = ch;
       else{
            arr[inx++] = ch;
            string str = to_string(count);
            for(char dig : str){
                arr[inx++] = dig;
            }
       }
        
        
       i--;
    }
    arr.resize(inx);
    for(char a : arr){
        cout << a ;
    }
    
}