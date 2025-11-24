/*
PRIORITY QUEUE -->internally work as Complete Binary Tree (maxheap, minheap)  
                |->we need to add hidder file of #include<queue>

        THEORY : it visualised as stack high priority element present at top 
            eg - priorityque.push(5) -->
                                            |   |
                                            |_5_|

                 priorityque.push(3) -->
                                            |   |
                                            | 5 |
                                            |_3_|

                priorityque.push(10) -->
                                            |   |
                                            |10 |
                                            | 5 |
                                            |_3_|

                priorityque.push(10) -->
                                            |   |
                                            |10 |
                                            | 5 |
                                            | 4 |
                                            |_3_|

    Creating : 
        priority_queue<int> q;   // normal priority queue in which element store in such a way that more priority element store at top


        priority_queue<int , vector<int>,greater<int>> q;   // in this priority queue priority queue in which element store in such a way that less priority element store at top
                                                            //greater<int> is functor : functor is nothing but function obeject
  
 
    FUNCTION :                                                              COMPLEXITY
        1] push , emplace -> add element at paricular priority order  -     O(logn)
        2] top          -> retur top value according to their priority -    O(1)
        3] pop          -> delete elment at top                        -    O(logn)
        4]size          -> return size of priority queue
        5] empty        -> return booleean value according to empty or not




*/