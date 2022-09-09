#include<bits/stdc++.h>
using namespace std;

/*  What is Unordered set ?

    It is a STL container that store elements in any random order.
    It don't allow values to repeat when stored. 
    
*/

int main()
{
  // 1. Declarations or  syntax of a unordered_set  :  unordered_set<data_type> set_name;

          unordered_set<int>st{1,2,3,4,4,5};  // {5,4,3,2,1} , elements stored in any random order  

  // 2. Functions on an unordered_set -

        st.insert(5);                         // {5,4,3,2,1} : '5' already present , but  duplicay is allowed   
 
        st.emplace(7);                        // {7,1,2,3,4,5} : order can change every time

        st.size();                            // size = 6

        st.find(5);                           // ptr -> 5 : return pointer of first occurence of '5' in unordered_set 

        st.count(2);                          // return '1' as '2' is present in set , if not then return '0'

        st.begin();                           // points to the starting element of unordered_set 

        st.end();                             // points to right of the ending element of multiset 

        st.erase(5);                          // {7,1,2,3,4} : deletes value '5' from the unordered_set

        st.erase(st.begin());                 // {1,2,3,4} : begining element is deleted

        st.clear();                           // removes all elements : size = 0

        st.empty();                           // return '1' if set is empty else return '0'

  // deleting a range of elements in a set using iterators -

        unordered_set<string>fruit = {"Mango" , "Grapes" , "Apple" , "Papaya"};

        // Elements will be stored in sorted order as : {"Papaya","Apple","Grapes"," Mango"}

        fruit.erase(fruit.find("Apple") , fruit.end());   // will erase elements in range : ["Apple","Mango") 
                                                          // i.e ["Apple" , "Grapes"] will be deleted but not "Mango".
        for(auto i: fruit)
          {
            cout<<i<<" ";
          }
  
  return 0;
}
