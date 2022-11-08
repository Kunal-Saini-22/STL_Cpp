#include<bits/stdc++.h>
using namespace std;

/*
    Unorderd map : is simliar to a map which stores elements in form a key and value pair , but
    it stores them in a random order and insertion , deletion and other operations in unordered
    map takes time of order O(1) as these are internally implemented using  Hashtable & O(N) at worst.

    Note : It stores elements uniquely like map.
    so , map[key] , operator can be used to extract the value corresponding to 'key' passed.

    Tip : where order of elements doesn't matter there we can use 'unordered_map' at place of 'map'

*/

void printUmap(unordered_map<int,string>&um)
{
    for(auto it : um)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }
  cout<<endl;
}

int main()
{
  // 1. Declaration of unordered_map
  unordered_map<int,string>um;

  // 2. Inserting values to unordered_map
  um.insert({1,"Kunal"});
  um.emplace(make_pair(2,"Vishu"));
  um[5] = "Aashu";

  //3. Traversing an unordered_map

  cout<<"\nOutput of traversal :\n";
  printUmap(um);

  // updating unordered_map
  um[2] = "Nishu";
  cout<<"\nAfter updating key = '2' value to 'Nishu' \n";
  printUmap(um);

  cout<<"Lookup for key 6 :"<<um.count(6)<<endl;


 /*
     4. Functions in unordered_map

    operator [] =

    um.empty();
    um.size();
    um.begin()
    um.end() 
    um.find(key) 
    um.count(key) : return '1' if element is present else '0'
    um.erase(key); for modification.
 
 */

    

  

  return 0;
}