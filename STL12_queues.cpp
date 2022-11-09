#include<bits/stdc++.h>
using namespace std;

/*
    Queues : The queue is a First In First Out type of data structure (FIFO), we require two terms to define a queue
    those are : FRONT and REAR end.

    * Front : The end of linear list from where deletion takes place.
    * Rear  : The end of linear list from where insertion takes place.
    
    _______________________________________________
    |   2  |   3    |   4    |    5     |   6     |
    |______|________|________|__________|_________| 
        |                                     |
      FRONT                                 REAR
    (deletion)                           (insertion)

    * Operations in QUEUE : 
     1. push(value) : insert 'value' at REAR end of queue.
     2. pop()       : remove 'value' pointed by FRONT. 
     3.front()      : Lookout the value at FRONT.

     * prints o/p in same order as in insertion.

*/

int main()
{
    //1. declaration or syntax : queue<int>q;
    queue<int>q;

    // 2. insertion in queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // 3. seeing value at the front of the list
    cout<<"Front = "<<q.front()<<endl;
    cout<<"Back = "<<q.back()<<endl;

    // 4. deletion in queue

    q.pop(); // removes '4'
    q.pop(); // removes '3'

   

    // 5. Printing a 'Queue'
    cout<<"\nOutput of queue \n";
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

   

    // 6. functions in queue

    /*
        q.push(value);    // Inserts 'value' at REAR end
        q.emplace(value);

        q.pop();           // Removes value from FRONT

        q.front();         // Returns element at FRONT 
        q.back();          // Returns element at REAR end

        q.size();          // returns size of queue

        q.empty();        // return '1' if empty else return '0'
            
    */
  
  
  return 0;
}