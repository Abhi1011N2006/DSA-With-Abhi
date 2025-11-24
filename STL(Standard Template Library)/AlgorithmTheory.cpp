/*
SORTING ARRAY / VECTOR :
        sort(arr , arr + n)        //arr+n -> pointing to arr of element last+1
        sort(arr,arr+n,greater<int>())  //greater<int>()  -> is comparator
        sort(arr.begin,arr.end)

        Vector pair :
                in vector pair this sort function sort on the basis of first value

                if we want to sort on basis of second value so we use build in comparator
                bool comparitor(pair<int,int> p1 , pair<int,int> p2){  // it is called build in comparator
                        if(p1.second < p2.second) return true;   // sorted in ascending order
                        else return false;
                }
                sort(vec.begin(),vec.end() , comparator);  //sort in ascending order of second value
                


REVERSE :
        reverse(v.begin() , v.end());

NEXT PERMUTATION :
        next_permutation(v.begin() , v.end());

        swap(a,b) ;   // swap both element
        min(5,6) ;    // return min element
        max(10,20);   // return max elemnt

MAX & MIN ELEMENT :
        max_element(v.begin(),v.end());
        min_element(v.begin(),v.end())

BINARY SEARCH :
        binary_search(v.begin(),v.end(),target)  -> return  0/1 depending upon target is present or not

COUNT SET BITS :
        __builtin_popcount();    |
        __builtin_popcountl();   |->return number of bits
        __builtin_popcountll();  |
*/