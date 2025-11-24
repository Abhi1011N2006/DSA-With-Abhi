#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    int sr=0,er=arr.size()-1;
    int sc = 0 ;
    int row;
    while (sr <= er)
    {
        int mid = sr + (er-sr)/2;
        int ec = arr[mid].size()-1;
        if (arr[mid][sc] <= target && arr[mid][ec] >= target)
        {
            row = mid;
            break;
        }
        else if (arr[mid][ec] < target)
        {
            sr = mid+1;
        }
        else if (arr[mid][sc] > target)
        {
            er = mid -1;
        }
    }
    int ec = arr[row].size()-1;
    cout << row << endl;
   while (sc <= ec)
   {    int mid = sc + (ec-sc)/2;
        if (arr[row][mid]==target)
        {
            cout << "Target found at :" << row << "," << mid;
            break;
        }
        else if (arr[row][mid]< target)
        {
            sc = mid +1;
        }
        else if (arr[row][mid]> target)
        {
            ec= mid-1;
        } 
   }
   
    
    
    

}