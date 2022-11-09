#include<bits/stdc++.h>
using namespace std;

/*
    Stack : A stack is a non-primitive linear data structure. it is an ordered list in which the addition of a
    new data item and deletion of the already existing data item is done from only one end known as the top
    of the stack (TOS). 

        top --->|  5  |              list of elements = {1,2,3,4,5}
                |_____|
                |  4  |
                |_____|
                |  3  |
                |_____|
                |  2  |
                |_____|
                |  1  |
                |_____|

    * It's a LIFO (Last In First Out) data structure.
    * It's a zero address data strucutre i.e only 'top' element of stack is accessible.
    * Operations in stack : Insertion i.e push() ,Deleting i.e  pop(), seeing top element.
    * prints o/p in reverse order.
    
*/

void printStack(stack<int>&s)
{
    cout<<"\nOutput of stack : \n";
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}

int main()
{
   // 1. Declaration or syntax : stack<data_type> stack_name;
    stack<int>s;

  // 2. Insertion or push() in stack
  s.push(10);
  s.push(20);
  s.push(30);
  s.emplace(40);
  

  // 3. Lookup for 'top' element of stack
  cout<<"Top = "<<s.top()<<endl; 

  // 4. Remove an element or pop() in stack

  s.pop();  // will remove top element i.e '40' in this case
  cout<<"Top = "<<s.top()<<endl; 
  s.pop();  // top element updated to '30' i.e now '30' is removed.
    cout<<"\nAfter two times pop() is performed \n";

  // 5. Printing the stack
    printStack(s);

  // 6. Functions in stack

    /*
         s.empty();
         s.size();
         s.swap(r);
         s.push();
         s.pop();
         s.top();

    */
   

  return 0;
}