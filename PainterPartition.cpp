#include<iostream>
#include<vector>
using namespace std;
bool Isvalid(int nums[] , int n , int m , int mid){
    int painted=0,painter=1;
    for (int i = 0; i <= n; i++)
    {
        if (nums[i]>mid)
        {
            return false;
        }
        
        if (nums[i]+painted<=mid)
        {
            painted += nums[i];
        }
        else{
            painted = nums[i];
            painter++;

        }
        
    }
   return  painter<=m;
    
}
int main(){
    vector<int>nums={40,30,10,20};
    int m=2, n = nums.size()-1;
    int str = INT_MIN,end=0,ans;
    for (int i = 0; i < nums.size()-1; i++)
    {
        str= max( str,nums[i]);
        end += nums[i];

    }
    while (str<=end)
    {
        int mid = str + (end-str)/2;
        if (Isvalid(nums.data() ,n,m,mid))
        {
            ans = mid;
            end = mid -1;
        }
        else{
            str = mid+1;
        }
        
    }
    cout << ans << endl;
    return 0;
    
}