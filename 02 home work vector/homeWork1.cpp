#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={4,2,1,2,1,6,7};
    for (int i = 0; i < vec.size()/2; i++)
    {
        swap(vec[i],vec[vec.size()-1-i]);
        
    }
    for (int j  : vec)
    {
        cout << j << endl ;
    }
    
    
}
