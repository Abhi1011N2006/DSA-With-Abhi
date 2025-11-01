#include<iostream>

using namespace std;

int main(){
    int n  = 4;
    int i;
    for(i = 0 ;i < n; i++){
        for(int j=1 ; j<n-i ; j++){
            cout << "  ";
        }
        cout << "* ";
        for(int k=0 ; k < 2*i-1 ; k++){
            cout << "  ";
        }
        if (i!= 0)
        {
            cout << "* ";
        }
        cout<<"\n";
    }
    int num = n -1 ;
    for(int l = ; l >= num ; num++ ){
        for(int m = 1; m <num-l;m++){
            cout << " ";
        }
    }
}