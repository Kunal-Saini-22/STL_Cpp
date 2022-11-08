#include<bits/stdc++.h>
using namespace std;

/*
    A multimap is similar to a map(stores key - value pairs in sorted order) with the addition that
    multiple entries can have the same keys.

    eg.  
        multimap<int,string>mp;

        mp.insert({22,"Kunal"});
        mp.insert({22,"Kiran"});

        output when printed : 

        22 -> kunal
        22 -> kiran
    

    time complexity of operation is : log(n).
    internal implementation is using R-B binary trees.

*/
int main()
{
    // 1. Declaration : multimap<key_type , value_type> map_name;
    multimap<int,string>m;

    // 2 . Inserting values into map

    m.insert({1,"Govind"});
    m.emplace(make_pair(5,"Keshav"));
    m.insert({1,"Vrinda"});
    m.insert({2,"Shyam"});

    // NOTE : m[6] = "kunal" , this operator is not allowed in multimap. 

    /*  because for provided index of any randomly accessible container(s)
        in case of multimap(s) there will be more than one entry for
        the same key and does create ambiguity. */

    // 3 . Accesing elements of map 

    auto it = m.begin();

    while(it != m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

    // 4 . Functions in multimap ( same as map)

    auto i = m.find(1);
    cout<<"See me here : "<<i->first<<" "<<i->second<<endl;

    m.erase(5);
    m.clear();
    m.empty();

  return 0;
}