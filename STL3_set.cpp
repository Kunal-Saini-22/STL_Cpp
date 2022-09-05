#include<bits/stdc++.h>
using namespace std;

/* What is Set? 

    A set in STL is a container that stores unique elements in a particular order.
    Every operation on a set takes O(1) complexity in the average case and takes O(n)
     in the worst case.

*/

int main()
{
    // 1. Declarations or  syntax of a set  : set<data_type> set_name;
            
            set<int>st{1,2,6,8};            // sorted & unique elements only.
    
    // 2. Functions on a set -

        st.insert(5);                       // {1,2,5,6,8}  : '5' inserted in sorted order   
 
        st.emplace(2);                      // {1,2,5,6,8}  : '2' already present , no duplicay allowed

        st.size();                          // size = 5

        st.find(5);                         // ptr -> 5 : return pointer/address of '5' in set

        st.count(2);                        // return '1' as '2' is present in set , if not then return '0'

        st.begin();                         // points to smallest element of set i.e '1' in this case

        st.end();                           // points to right of the greatest element of set i.e '8' in this case

        st.erase(5);                        // {1,2,6,8} : deletes '5' from set

        st.erase(st.begin());               // {2,6,8} : begining element is deleted

        st.clear();                         // removes all elements : size = 0

        st.empty();                         // return '1' if set is empty else return '0'
    
        // deleting a range of elements in a set using iterators -

            set<string>fruit = {"Mango" , "Grapes" , "Apple" , "Papaya"};

            // Elements will be stored in sorted order as : {"Apple" , "Grapes" , " Mango" , "Papaya" }
           
            set<string>::iterator it1, it2;

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

        
        set<int>even = {0,2,4,6,8};
        set<int>odd = {1,3,5};

        swap(even,odd);             // even = {1,3,5}  odd = {0,2,4,6,8}


  return 0;
}
