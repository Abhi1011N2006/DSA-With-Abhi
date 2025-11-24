#include<iostream>
using namespace std;
pair<int,int>linearSearch(int matrix[][3] ,int target){  //we must specify the column as compiler need this
    for ( int row = 0; row < 4 ; row++)                    // info to acess the element of 2d array correctly
    {                                                       // pair<int,int> -> used to return two variable
        for(int col = 0; col < 3 ; col++){
            if (matrix[row][col] == target)
            {   

                return {row , col};
            }
            
        }
       
     }
     return {-1,-1} ;
}
int main(){
     int matrix[4][3] = {{1,2,3},{33,4,5},{55,6,7},{77,8,9}};
    int target = 8;
            // r0 ->|- 1  2  3 -|
            // r1 ->| 33  4  5  |
            // r2 ->| 55  6  7  |
            // r3 ->|_77  8  9 _|
                //   c0  c1  c2
    auto result  = linearSearch(matrix , target);     //auto :- it allow the compiler to automatically 
    if(result.first!=-1){                               // deduce the data type of a variable based on the value assigned to it
        cout << "Target found at: " << result.first << "," << result.second;
    }
    else{
        cout << "Target not found" << endl;
    }
    
    
     



            }