#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums = {4,1,5,2,3};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        int si = i;
        for (int j = i+1; j < n; j++)
        {
            if (nums[si]>nums[j])
            {
                si = j; 
            }
           
           
        }
         swap(nums[i],nums[si]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl ;
    }
    
    return 0;
}