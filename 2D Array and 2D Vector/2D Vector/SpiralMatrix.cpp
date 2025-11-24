#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = arr.size();
    int m =arr[0].size();
    int sr = 0, er = n-1;
    int sc = 0 , ec = m-1;
    vector<int> ans;
    while (sr<=er && sc <= ec)
    {
        for (int j = sc ; ec >= j;j++)
        {
            ans.push_back(arr[sr][j]);
        }
        for (int i = sr+1; i <= er; i++)
        {
            ans.push_back(arr[i][ec]);
        }
         for (int j = ec-1 ; sc <= j;j--)
        {   if (sr == er)
        {
            break;
        }
        
            ans.push_back(arr[er][j]);
        }
        for (int i = er-1; i > sr; i--)
        {   if(sc==ec)break;
            ans.push_back(arr[i][sc]);
        }
        sr++;er--;sc++;ec--;
        
    }
   for (size_t i = 0; i < ans.size(); i++)
   {
        cout << ans[i] <<"," ;
   }
   
    
}