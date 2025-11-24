/*
VECTOR AND THIR FUNCRTION:   -> 1]Dynamic
                                2]Require to add hider file : #include<vector>
    creating:
        vector<int> name ;  -> initialy size = 0;

    initializing :  
        vector<int> name = {1,2};
        vector<int> vec(3,10);  -> vector of size 3 and each element has value equal to 10
        vector<int> vec2(vec1);   -> copy of vec1 in vec2
        
    Vector in memory :
        if vector has size 1 : vector<int> name = {2};
                                _____
                               |__2__|
        while increase 1 element : name.push_back(3);
                            ________
                            |_2_|_3_|        ->when we add element new memory assign to vector of size double of initial old element copied in new memory and add element to new vector
         while increase 1 element : name.push_back(4);
                            ________________
                            |_2_|_3_|_4_|___|      ->-when we add element new memory assign to vector of size double of
                                                     -initial old element copied in new memory and add element to new vector
                                                     -size = 3; capacity = 4;


    Function : 
        1] size & capacity : size - give total size of vector;
                             capacity - total capacity of vector in 
                             in above example->size = 3; capacity = 4;

        2] push_back & pop_back : push_back(element)-> Add element at end of vector
                                  pop_back -> delete element present at end

        3]emplace_back : Alternative for push_back

        4]at() or [] :at(inx) -> it used for accesing element in vector eg . name.at(1);
                      [inx] -> mostly used for accesing element eg. name[1]

        5]front & back : vec.front() -> return front element of vector
                         vec.back()  -> return back elemetn of vector

        NOTE:complexity of above function is O(1)

        6]erase : vec.erase(vec.begin()) / vec.erase(vec.begin(), vec.begin()+3): it erase value at patrticular iterator vec.begin() provide that iterator
                                                                                  it erase in range   

        7]insert : vec.insert(pos,val) ->it insert value at particular position of vector
                                         after insertion element change position one place by one   

        NOTE: complexity of erase and insert function is O(n)

        8]clear: vec.clear() -> it clear the vector but size and capacity remains same

        9]empty : vec.empty() -> it return boolean value depend upon vector is empty or not


    Iterator:
        1]vec.begin() -> it store the pointer value of first element while we use dereferrance operator(*) it give value store at first index

        2] vec.end()->it pointed to (last + 1) index location which store garbage value

        Loop :
            for(auto it = vec.begin(); it!=vec.end();it++){
                cout << * it  << endl;
            }
*/