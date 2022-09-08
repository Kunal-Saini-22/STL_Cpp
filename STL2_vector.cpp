#include <bits/stdc++.h>
using namespace std;

/*  Why Vector ? 
    In array user need to pre-define its size but vector is called a dynamic array as one can 
    add elements to it dynamically , initially when declared an array its size = 0 , as we push 
    an element into it its capacity starts  becomes double of its previous capacity.     
*/

int main()
{
    // syntax : vector<data_type> vector_name;
            vector<int>vtr;
    
    // 1. Declarations of an vector :
        
            vector<int>v1;              // empty vector           , (size == capacity = 0) 
            
            vector<int>v2 {0};          // {0}                    , (size == capacity = 1)
            
            vector<int>v3{1,2};         // {1,2}                  , (size == capacity = 2)
            
            vector<int>v5(5,2);         // {2,2,2,2,2}            , (size == capacity = 2)
            
            vector<int>v = {1,2,3,4};   // {1,2,3,4};             , (size == capacity = 4) 
           
    // 2. Functions on array: 
           
           v.size();                        // {1,2,3,4};             , (size = 4  & capacity = -)
           
           v.capacity();                    // {1,2,3,4};             , (size = 4  & capacity = 4)
          
           v.push_back(5);                  // {1,2,3,4,5};           , (size = 5  & capacity = 8) 
           
           v.emplace_back(6);               // {1,2,3,4,5,6};         , (size = 6  & capacity = 8)
           
           v.pop_back();                    // {1,2,3,4,5 };          , (size = 5  & capacity = 8)
           
           v.front();                       // returns element at begining of vector i.e v[0] = 1
           
           v.back();                        // returns element at ending of vector i.e v[4] = 5
           
           v.begin();                       // points to v[0] 
           
           v.end();                         //  points to v[size + 1] i.e one right to the end of vector 
           
           v.erase(v.begin(), v.begin()+2); // {3,4,5};               , (size = 3  & capacity = 8)
           
           v.erase(v.end()-1);              // {3,4}                  , (size = 2  & capacity = 8)
           
           v.clear();                       // empty vector           , (size == capacity = 0)
           
           v.empty();                       // returns : 1 , if (vector is empty) else ( return 0 )
           
           v.insert(v.begin(), 12);         // {12}                   , (size = 1  & capacity = 8) 
           
           swap(v2,v3);                     // v2 = { 1,3}  & v3 = {0}  
            
           sort(v.begin(),v.end());         // sorts vector in increasing order : 1 , 2 , 4 , 6 , 8
        
           sort(v.begin(),v.end(), greater<int>());   // sorts vector in decreasing  order : 8 , 6 , 4 , 2 , 1
           
    // 3. accessing or printing a vector  
        
           vector<int>even = {0,2,4,6,8,10};
        
    // 3.1  Using a 'for'  loop-
        
             for(int i = 0 ; i<even.size();i++)
            {
                cout<<even[i]<<" ";
            }

            cout<<endl;
    // 3.2 Using an 'iterator' or 'pointer' - 
        
            vector<int>::iterator it;
            
            for(it = even.begin(); it!=even.end();it++)
            {
                cout<<(*it)<<" ";
            }
            
            cout<<endl;
    // 3.3 Using a 'for each ' loop and 'auto' keyword- 
        
            for(auto i : even)
            {
                cout<<i<<" ";
            }
          
    // 4.  Multi-dimensional vectors declaration-
    
    // 4.1 Declare a vector of size : 10 X 20
           
            vector<vector<int>>vect(10, vector<int>(20,0));
            
    // 4.2 Declare a vector of size : 10 X 20 X 30
            
            vector<vector<vector<int>>>ans(10,vector<vector<int>>(20,vector<int>(30,0)));

    // 5.  Array of Vector
        
    // 5.1  Declaration:
    
            vector<int>arr[3];
        /*
            No. of rows will be fixed i.e '3'
            but elements in each row will be added dynamically
        */
        
            arr[0] = {1,2,3};           // row 1
            arr[1] = {10,20,30,40};     // row 2
            arr[2] = {100};             // row 3
        
    // 5.2  Accessing or printing a array of vector 
    
        
    // 5.2.1 Using 'for' loop 
        
            for(int i = 0 ;i<3;i++)
            {
                for(int j = 0 ; j<arr[i].size();j++)
                {
                    cout<<arr[i][j]<<" ";
                }
            }
        
    // 5.2.2 Using 'iterator' - 
        
        vector<int>::iterator itr;
        
            for(int i = 0 ;i<3;i++)
            {
                for(itr = arr[i].begin(); itr!= arr[i].end();itr++)
                {
                    cout<<(*itr)<<" ";
                }
                cout<<endl;
            }
        
    // 5.2.3 Using 'for each loop' & 'auto keyword'- 
        
            for(auto row : arr)
            {
                for(auto col : row)
                {
                    cout<<col<<" ";
                }
                cout<<endl;
            }
    
    // 6. vector of vector -
    
    // 6.1  Declaration:
    
            vector<vector<int>>arri;
        /*
            No. of rows will be added dynamically as well as
             elements in each row will be also added dynamically
        */
        
            arri = {{1,2,3,4},{5,6},{7,8,9,10,11}};
            
    // 6.2  Accessing or printing an array of vector
        
    // 6.2.1 Using 'for' loop
            
            for(int i = 0 ; i<arri.size();i++)
            {
                for(int j = 0 ; j<arri[i].size();j++)
                {
                    cout<<arri[i][j]<<" ";
                }
                cout<<endl;
            }
    
    // 6.2.2 Using 'iterator '- 
            
            vector<int>::iterator ptr ;
            
            for(int i = 0 ; i<arri.size();i++)
            {
                for(ptr = arri[i].begin();ptr != arri[i].end(); ptr++)
                {
                    cout<<(*ptr)<<" ";
                }
                cout<<endl;
            }
    
     // 6.2.3 Using a 'for each loop ' & 'auto' keyword- 
     
            for(auto row : arri)
            {
                for(auto col : row)
                {
                    cout<<col<<" ";
                }
                cout<<endl;
            }
    
    return 0;
}

