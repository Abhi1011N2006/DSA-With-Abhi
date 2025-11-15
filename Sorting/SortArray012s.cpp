#include<iostream>
#include<vector>
using namespace std;
void sortColor(vector<int>& nums){
    int n = nums.size();
    int rcount=0,bcount=0,wcount=0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]==0)
        {
          rcount++;  
        }
        else if (nums[i]==1)
        {
            wcount++;
        }
        else{
            bcount++;
        } 
    }
    int i=0;
    while (i < n )
    {
        if (rcount > 0)
        {
            nums[i]=0;
            rcount--;
            i++;
            continue;
        }
        else if (wcount > 0)
        { nums[i]=1;
            wcount--;
            i++;
            continue;
        }
        else{
            nums[i]=2;
            bcount--;
            i++;
            continue;
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << endl;
    }
    
    
    
}
int main(){
    vector <int>nums={2,0,2,1,1,0,1,2,0,0};
    sortColor(nums);
}