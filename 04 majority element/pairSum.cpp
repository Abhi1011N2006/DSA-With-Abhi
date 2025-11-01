#include<iostream>
using namespace std;
int main(){
    int arr[]={2,7,11,15};
    int sum =0 , target = 26 , size = sizeof(arr)/4;
    for (int i = 0; i < size; i++)
    {
        for(int j = i+1; j< size ; j++){
            if (i==j)
            {
                continue;
            }
            sum = arr[i]+arr[j];
            if(sum == target){
                cout << "pair is :" << arr[i] <<","<< arr[j] ;
                break;
            }
            else{
                sum=0;
            }

        }
    }
    end:;
    return 0 ;
}