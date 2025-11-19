#include<iostream>
#include<cstring>
using namespace std;
int main(){
    // Anything between single or double quates is said to be string
    // Ways to initialised string
    char str[]={'a','b','h','i','\0'}; 
    char newstr[] = "Abhi";
    string str3="Abhi" ; /*string :- 1] separate data type in c++ 
                                     2] Dynamic allocation
                                     3] it save element in continuous manner as in array
                                     4] support normal operator (+ : for concanitation)
                                     5] str3.length() :- written length
                                     6] require getline funtion for whole sentenve input 
                                            syntax :- getline(cin , str3, '.') 
                                     7] we can use loop for print string */


    // "\0" is NULL character its indicate the end of string it not  in string not print and not cout in string but should consider whle initializing the length of string
    cout << strlen(str)<< endl;
    cout << newstr << endl;



    // Character array-Input and Output
    // We cannot take input whole sentence of string using cin it take only first word :-
    char str1[100];
    cout << "enter the string:" << endl;
    cin >> str1 ;   //input :- Hello world
    cout << str1 <<endl; //output :- Hello

    //So to overcome problem of taking input of whole sentence thir is specific function:-
      //Syntax :- cin.getline(str_name,numberofCharAsInput,delim?)
      //delim:- is the any specific character that terminate in taking input 

    char str2[100];
    cout << "enter the string:" << endl;
    cin.getline(str2 , 100,'.');   //input :- Hello world.
    cout << str2 <<endl; //output :- Hello world



    return 0;
}