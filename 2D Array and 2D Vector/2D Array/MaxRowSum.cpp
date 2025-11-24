#include<iostream>
using namespace std;
int main(){
    int matrix[4][3] = {{1,2,3},{33,4,5},{55,6,7},{77,8,9}};
    int final=0;

    for ( int row = 0; row < 4 ; row++)
     {  int sum = 0;
        for(int col = 0; col < 3 ; col++){
            sum += matrix[row][col];
        }
        final = max(sum,final);
     }
     cout << final ;
}