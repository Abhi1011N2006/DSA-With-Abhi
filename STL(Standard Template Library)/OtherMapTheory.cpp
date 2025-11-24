/*
MULTIMAP : 1]we cannot use square bracket notation to access or initialised we use insert and erase
            2]not require unique key
            3]

        creating :
                multimap<string , int >m;


        Function :
            1] insert or emplace : m.insert("key" , value)  /  m.emplace("key" , value) -> used to insert value 
            2] count : m.count("tv")  :  return value 0/1 depending upon key is present or not
            3] erase : m.erase ("key") : erase perticular key from map if multiple key of same name so erase all key 
            4]find : m.find("key") : find key in map -->if found :return  iterator 
                                                      |-> not found : return m.end()


            complexity : insert , erase , count : O(logn)

        
UNORDERED MAP : in normal map data arranged in sorted manner but unordered map cannot do 
                2] we require to added hidder file #include<unordered_map>
                3] cannot take duplicate the key


            complexity : insert , erase , count : O(1)
*/