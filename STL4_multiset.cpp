#include<bits/stdc++.h>
using namespace std;

/*  What is multiset ?

    It is a STL container that store elements in sorted order and can 
    contain multiple entries with same values unlike set which only stores
    elements uniquely.

*/

int main()
{
  // 1. Declarations or  syntax of a multiset  :  multiset<data_type> mutliset_name;

          multiset<int>mset{3,3,3,2,2,1};       // stores sorted elements : {1,2,2,3,3,3}
         
  // 2. Functions on a multiset 

        mset.insert(5);                         // {1,2,2,3,3,3,5,5}  : '5' inserted in sorted order   
 
        mset.emplace(5);                        // {1,2,2,3,3,3,5,5}  : '5' already present , but  duplicay is allowed

        mset.size();                            // size = 8 , 

        mset.find(5);                           // ptr -> 5 : return pointer of first occurence of '5' in multiset 

        mset.count(2);                          // returns no. of times an element repeat in a multiset

        mset.begin();                           // points to smallest element of multiset i.e '1' in this case

        mset.end();                             // points to right of the ending element of multiset i.e '5' in this case

        mset.erase(5);                          // {1,2,2,3,3,3} : deletes all '5's from multiset

        mset.erase(mset.begin());               //  {2,2,3,3,3} : begining element is deleted

        mset.clear();                           // removes all elements : size = 0

        mset.empty();                           // return '1' if set is empty else return '0'

  // deleting a range of elements in a set using iterators -

            multiset<string>fruit = {"Mango" , "Grapes" , "Apple" , "Papaya"};

            // Elements will be stored in sorted order as : {"Apple" , "Grapes" , " Mango" , "Papaya" }
           
            multiset<string>::iterator it1, it2;

            it1 = fruit.begin();    // it1 -> "Apple"
            it2 = fruit.end();      // it2 -> "Papaya" + 1
            
            it2--;                  // it2 -> "Papaya"
            it2--;                  // it2 -> "Mango"

            fruit.erase(it1,it2);   // will erase elements in range : [it1,it2) 
                                    // i.e ["Apple" , "Grapes"] will be deleted but not "Mango".

            for(auto i: fruit)
            {
                cout<<i<<" ";
            }




  return 0;
}
