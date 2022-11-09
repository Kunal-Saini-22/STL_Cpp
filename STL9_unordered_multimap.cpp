#include<bits/stdc++.h>
using namespace std;
/*

    A quick Glance : 

    Map : 
    * no duplicate elements allowed 
    * unique key and value pairs only 
    * elements in sorted order
    * implemented by R-B tress
    * TC : O(log N)
    * []= is allowed
    
    Unordered_map :
    * no duplicate allowed 
    * unique key and value pairs only 
    * elements in random order.
    * implemented using hashtables
    * TC : O(1) to O(N)
    * []= is allowed
    
    multimap :
    * Allows multiple elements i.e a single 'key' can have multiple values.
    * To avoid ambiguity , []= is not allowed.
    
    Unordered_ multimap : it's like unordered map the only difference is unordered 
    multimaps can store duplicate elements.

    * Prints output in the random order.
    * Allows duplicate values i.e multiple values for same 'key'
    * erase("key") , will delete all elements with the 'key' value passed in the erase()
    
    eg. unordered_multimap<string,int>um;

        um.insert({"kunal",3});
        um.insert({"Yash",5});
        um.insert({"Yash",9});

        ==> output will look like : 

        kunal -> 3
        Yash  -> 5
        Yash  -> 9

        ==> performing erase('key')

        um.erase("Yash");

        ==> output will look like : 

        kunal -> 3
        
        both elements with key == 'Yash' will be erased.
    

*/

void printMap(unordered_multimap<string , int>&um)
{
    cout<<"\nThe required output : \n";
    for(auto i : um)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
}

int main()
{
    // 1. declaration 
    unordered_multimap<string,int>um;

    // 2. assigning values
    um.insert({"kunal",5});
    um.insert({"Yash",2});
    um.emplace(make_pair("Ankit",7));
    um.insert({"Yash",52}); // duplicate value storing attempt
    
    // um["nitin"] = 12;   Not a valid operator
     um.insert({"kannu",1});

    // 3. Traversing map
      printMap(um);

    // 4. functions 

     /*
         um.begin();
        um.end();
        um.find("kunal");
        um.size();
        um.clear();
        um.empty();
        
     */  

    um.erase("Yash");
    printMap(um);


  
  return 0;
}