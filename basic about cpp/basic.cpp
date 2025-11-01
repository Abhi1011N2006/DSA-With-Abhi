#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character:";
    cin >> ch ;
    int ascii = (int)ch;
    cout << ascii << "\n";
    if (ascii>=97 && ascii<=122)
    {
        cout << "lowercase character! \n";
    }else if (ascii>=65 && ascii<=90)
    {
        cout << "UPPERCASE CHARACTER \n";
    }
    

    return 0 ;
}