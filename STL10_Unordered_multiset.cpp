#include<bits/stdc++.h>
using namespace std;

/*
    unordered_multimap : 
    * It is an associative container just like an unordered set.
    * The only difference is, it can store duplicate elements in it.
    * Note the values will be randomly arranged.

*/
int main()
{
  // 1. Declaration : unordered_multiset<object_type> variable_name;

  unordered_multiset<int>s;
  unordered_multiset<string> str;

  // 2. Initialisation 

  s.insert(1);
  s.insert(2);
  s.insert(2);
  s.insert(1);
  s.insert(1);

  str.emplace("Krishna");
  str.emplace("Gopal");
  str.emplace("Krishna");
  str.emplace("Madhav");

  // 3. Printing  an unordered multiset
    // s.erase(1);

cout<<"\nOutput of set 1\n";
  for(auto i : s)
  {
    cout<<i<< " ";
  }

cout<<"\nOutput of set 2\n";
 
 auto it = str.begin();
 while(it!=str.end())
 {
    cout<<*it<<" ";
    it++;
 }


    //4. Functions in unordered_multiset

    cout<<"\ncount of 1 = "<<s.count(1)<<endl;
    cout<<"\ncount of krishna = "<<str.count("krishna")<<endl;


    /*
        s.begin();      // returns iterator at begining
        s.find(value);  // returns the iterator where value is found 
        s.end();        // returns an iterator next to end of set

        s.insert(); or s.emplace(); // insert values to set.

        s.count(value); //  gives the count of a particular element in the unordered multiset.

        s.erase(value); // deletes all instances of passed value
        s.size();
        s.empty();
    
    */

  return 0;
}