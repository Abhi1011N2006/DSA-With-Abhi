/*
ITERATOR : An iterator is an object that allows you to traverse through elements of a container 
            (like arrays, vectors, lists) one by one, similar to a pointer.


            #include <iostream>
            #include <vector>
            using namespace std;

            int main() {
                vector<int> v = {10, 20, 30, 40};

                vector<int>::iterator it;

                for(it = v.begin(); it != v.end(); ++it) {
                    cout << *it << " ";
                }

                return 0;
            }

            OUTPUT : 10 20 30 40



FUNCTOR : A Functor (Function Object) is an object that behaves like a function
         by overloading the operator().


            #include <iostream>
            using namespace std;

            class Multiply {
            public:
                int operator()(int a, int b) {
                    return a * b;
                }
            };

            int main() {
                Multiply mul;

                cout << mul(4, 5);

                return 0;
            }

            OUTPUT : 20



FUNCTOR WITH STL EXAMPLE :
            #include <iostream>
            #include <vector>
            #include <algorithm>
            using namespace std;

            class IsEven {
            public:
                bool operator()(int x) {
                    return x % 2 == 0;
                }
            };

            int main() {
                vector<int> v = {1, 2, 3, 4, 5, 6};

                int count = count_if(v.begin(), v.end(), IsEven());

                cout << "Even numbers: " << count;

                return 0;
            }

        OUTPUT : 2, 4, 6



*/