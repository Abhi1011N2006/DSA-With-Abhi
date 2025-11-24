/*
MAP :   --> each element of map is key value pair
        |-> key should be a unique value
        |-> Require add hidder file #include<map>

    crearting :
            map<string , int> m ;  
                   |       |
                data type  |-> data type of value
                 of key 
               
    
    initialization : 
                m [key] = value;

    accesing : 
                m[key];


    FUNCTION :
            1] insert or emplace : m.insert("key" , value)  /  m.emplace("key" , value) -> used to insert value at particular position
            2] count : m.count("tv")  :  return value 0/1 depending upon key is present or not
            3] erase : m.erase ("key") : erase perticular key from map
            4]find : m.find("key") : find key in map -->if found :return  iterator 
                                                      |-> not found : return m.end()
        
            */