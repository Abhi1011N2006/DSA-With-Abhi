#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec = {4,1,2,1,2,7,6};
    for (int val : vec)
    {   int count = 0;
        for (int j : vec)
        {  
            if (val==j)
            {
                count ++;
            }
           
            
        }
        if (count==1)
        {
                cout << val <<endl ;
        }
        
    }
    return 0 ;
    
}
