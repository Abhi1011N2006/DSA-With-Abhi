#include<iostream>
using namespace std;
int main(){
     int matrix[3][3] = {{1,2,3},{33,4,5},{55,6,7}};
    // int pd = 0 , sd = 0;
    int n = 3;
    // int row = 3;

    // for ( int row = 0; row < 4 ; row++)
    //  {  
    //     for(int col = 0; col < 3 ; col++){
    //        if (row == col)
    //        {
    //             pd +=  matrix[row][col];
    //        }
    //        else if(col == 2-row)
    //        {
    //             sd +=  matrix[row][col];
    //        }
           
           
           
    //     }
       
    //  }
    //  cout << pd+sd;
    //  cout << pd << endl << sd <<endl ;
    //   int key = 0;
    //  if (row % 2!=0)
    //  {
    //     key = row / 2;
    //  }

    //  int ans = pd + sd - matrix[key][key];
    //  cout << ans << endl;


    //MORE OPTIMIZE APPROACH
    int sum = 0;
    for (int row = 0;row < 3 ; row++)
    {
        sum += matrix [row][row];
        if (row != n-1-row)
        {
            sum+= matrix[row][n-1-row];
        }
        
    }
    cout << sum ;
    
     
}