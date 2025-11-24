#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,12,19},{10,13,14,17,24},{18,21,23,26,30}};
    int row = 0 , col = arr[row].size()-1; 
    int target = 30;
    int n = arr.size();
    // bool flag = false;
    while (col >= 0 && row <= n-1)
    {
        if (arr[row][col]==target)
        {
            cout << "Element  found : " << row << "," << col <<endl;
            // flag = true;
            break;
        }
        else if (arr[row][col] > target)
        {
            col--;
        }
        else if (arr[row][col] < target)
        {
            int sr = 0 , er = n-1;
            while (sr <= er)
            {
                int mid = sr + (er-sr)/2;
                if (arr[mid][col] == target)
                {
                    cout << "Element found at : " << mid <<"," << col ;
                   return 0;
                }
                else if (arr[mid][col]> target)
                {
                    er = mid -1;
                }
                else if (arr[mid][col] < target)
                {
                    sr = mid + 1;
                }
                
                
            }
            
        }
        
        
    }
    // if (flag != true)
    // {
    //     cout << "Element not found : " << endl;
    // }
    
    
}