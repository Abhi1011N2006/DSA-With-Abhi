#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,0,0,0};
    int b[3]={2,4,6};
    int n = 3;
    int m = 3;
    int ind = n+m-1;
    int end = ind;
    int i=n-1;
    int j= m-1;
   
    do
    {
        if (a[i]>b[j] && i>=0)
        {
            a[ind--] = a[i--];
            
        }
        else{
            a[ind--]=b[j--];
           
        }
        
    } while (j>=0);
    for (int k = 0; k <= end; k++)
    {
        cout<<a[k] << endl;
    }
    
    
}