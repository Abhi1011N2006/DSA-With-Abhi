#include<iostream>
using namespace std;
int main(){
    //Initializing 2D Array 
    // Syntax :- data_type identifier [no_rows] [no_column];
    int matrix[4][3] = {{1,2,3},{33,4,5},{55,6,7},{77,8,9}};

            // r0 ->|- 1  2  3 -|
            // r1 ->| 33  4  5  |
            // r2 ->| 55  6  7  |
            // r3 ->|_77  8  9 _|
                //   c0  c1  c2
      
      
      // accessing element in 2D array
      cout << matrix[3][1] << endl;

      matrix[3][1] = 88;  //reinnitialization 
      cout << matrix[3][1] << endl;

  
    // Input and Output in 2D Array using loop

    //INPUT
     for ( int row = 0; row < 4 ; row++)
     {
        for(int col = 0; col < 3 ; col++){
           cin >> matrix[row][col] ;
        }
       
     }
    // OUTPUT
     for ( int row = 0; row < 4 ; row++)
     {
        for(int col = 0; col < 3 ; col++){
            cout << matrix[row][col] << " " ;
        }
        cout << endl;
     }
     
   
    // WAY HOW 2D ARRAY STORE IN MEMORY                              // r0 ->|- 1  2  3 -|
                                                                     // r1 ->| 33  4  5  |
                                                                     // r2 ->| 55  6  7  |
                                                                     // r3 ->|_77  8  9 _|
                                                                         //   c0  c1  c2 
    // 1:- ROW MAJOR
    //        ____________________________________________________
    //        | 1 | 2 | 3 | 33 | 4 | 5 | 55 | 6 | 7 | 77 | 8 | 9 | 
    //        |--------------------------------------------------|
  
    // 2:-COLOUMN MAJOR      
    //        ____________________________________________________
    //        | 1 | 33 | 55 | 77 | 2 | 4 | 6 | 8 | 3 | 5 | 7 | 9 | 
    //        |--------------------------------------------------|
  
     // in above two type how that store in memory depend upon system/ OS but majority it is row major 
  
  
  
    }