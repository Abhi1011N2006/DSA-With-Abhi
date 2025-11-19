#include<iostream>
#include<cstring>
#include<algorithm>

#define MAX 100
using namespace std;
int main(){
    string str ;
    getline(cin,str);
    int s =0 , e = str.size()-1;
    while (s<=e)
    {
        swap(str[s++] , str[e--]);
    }

    // reverse(str.begin(),str.end());         // Direct fun for reverse

    cout << str ;
    
}