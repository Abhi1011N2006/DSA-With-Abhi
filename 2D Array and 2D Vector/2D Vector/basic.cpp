#include<iostream>
#include<vector>
using namespace std;
int main(){
    //INITIALIZING 2D VECTOR    
    //1D vector
    vector<int> vec = {17,11,111,1111};
    

    //2D vector
    vector<vector<int>> vec2 = {{1,2,3},{33,4,5}};

    //ACCESING ELEMENT

    cout << vec2[0][0] <<endl;


    //LOOP ON 2D VECTOR
    //row = vec2.size();
    //col = vec2[row].size();

    for (size_t i = 0; i < vec2.size(); i++)
    {
        for(size_t j = 0 ; j < vec2[i].size() ; j++){
            cout << vec2[i][j] << " ";
        }
        cout << endl;
    }
    
}