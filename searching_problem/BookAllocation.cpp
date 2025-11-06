#include<iostream>
#include<vector>
using namespace std;
int Isvalid(vector<int>nums,int n,int mid){
    int stu = 1 , pages = 0 ;
    for(int i =0 ; i<= n ; i++){
        if ((nums[i] > mid))
        {
            return 0;
        }
        if(pages+nums[i]<=mid){
            pages += nums[i]; 
        }
        else{
            stu+=1;
            pages=nums[i];
        }
        
    }
    if (stu<=2)
    {
        return 1;
    }
    else{
        return 0;
    }
    

}
int main(){
    vector<int>nums={15,17,20};
    int str=0,end = 52 , n = nums.size()-1;
    int ans;
    while (str<=end)
    {
        int mid = str + (end-str)/2;
        if (Isvalid(nums,n,mid))
        {   ans = mid; 
            end = mid -1;
        }
        else{
            str=mid+1;
        }
        
    }
    cout << ans << endl;
    return 0;
    
}