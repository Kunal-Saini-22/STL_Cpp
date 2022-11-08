#include<bits/stdc++.h>
using namespace std;

/*
    A map is an associative container that stores 'key' and 'value' pairs in sorted order (ascending by default).
    time complexity of operation is : log(n).
    internal implementation is using R-B binary trees.

    Note Worthy Points :

    1. The difference b/w : insert( ) and [ ] operator

      * m.insert({1,"kunal"}) : This will insert the pair into map by checking if , the given 
        key is not present then insert the pair {1,"kunal"}; but if already its there then no 
        action is performed.

        eg.   m.insert({1,10});
              m.insert({5,20});
              m.insert({3,22});
              m.insert({1,55});

        When we print the map , we will get :

            1 -> 10
            3 -> 22
            5 -> 20

        i.e if key is already present the no value updation.

      * m[key] = value : This will check if 'key' is present then value corresponding to 
       the existing key will be updated to new value passed and if key is not present then
       a new key , value pair is created and inserted.

       eg.  m.insert({2,10});
            m[2] = 20;
            m[1] = 30; 

        When we print the map , we will get :

            1 -> 30
            2 -> 20
        
        i.e i.e if key is already present then value is updated.

    2. The will be unique i.e No two 'key' values can be same.
    E.g.. for a map : map<int,int>mp;

            mp.insert({1,10});
            mp.insert({1,20});
    
    as per 1st point the 'key' should be unique , so in this case key = '1' 
    that is already present. so no updation in the value.

    3. The Key and value pairs will be arranged in increasing order as per 'key'.

    4. What are valid key_types and value_types that can be passed into a map?
       The answer is : data type of 'key' and 'value' of the map can be of any data types
       primary( like : int , char, bool , float) , derived (like : array , pointers , enums
       struct etc).

*/

// 4. Printing and traversing a map
void printMap(map<int,string>&m)
{
    cout<<"Output : \n";
    for(auto it : m)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<endl;
}

int main()
{
   
   // 1. Declaration of map / ordered map 

   //syntax: map<key_type , value_type> map_name; 
    map<int,string>mp;

    // 2. Inserting key - value pairs  in a map

    mp.insert(make_pair(5,"Keshav"));
    mp.insert({3,"Madhav"});
    mp.emplace(make_pair(1,"Gopal"));
    mp[2] = "Govind";

    cout<<"\nAfter Insertion "<<endl;
    printMap(mp);

    // 3. Updating the existing key - value pair
    mp[1] = "Vrinda";
    cout<<"\nAfter updating key = '1' with value = 'Vrinda' "<<endl;

     //4. Traversing & printing a map
      printMap(mp);

    // 5.Functions in map<>

    auto start = mp.begin();    // returns the iterator to starting of map 
    auto end = mp.end();        // return the iterator to one next to end of map
    auto position = mp.find(2); // return the iterator to entry having key equal to given key (passed as parameter).

    cout<<start->first<<" "<<start->second<<endl;
    // cout<<end->first<<" "<<end->second<<endl;    prints garbage value if executed
    cout<<position->first<<" "<<position->second<<endl;

    cout<<"\nSize of map = "<<mp.size()<<endl; // returns no. of key - value pairs in the map

    mp[10] = "kunal";
    cout<<"\nAfter inserting 'kunal' to map \n";
    printMap(mp);

    cout<<"\nAfter erasing 'kunal' from map \n";
    mp.erase(10);               // erases key value pair corresponding to 'key' passed
    printMap(mp);

    mp.clear();                 // removes all the entries form map i.e size = 0
    cout<<"\nAfter clear() \n";
    cout<<"Size of map = "<<mp.size()<<endl;

    if(mp.empty())              // if map size = 0 , returns '1' else return '0'
    {
        cout<<"\nMap is Empty :( \n";
    }        
    else {
        cout<<"\nMap is not empty :) \n";
    }


  return 0;
}