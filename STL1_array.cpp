#include <bits/stdc++.h>
using namespace std;

/*
    NOTE:- 
            in Global scope :
                Valid size of array of type ( int , float , double)  is 10^7
                and for array of type ( bool) it is 10^8. 
                
            but in local scope : 
                Valid size of array of type ( int , float , double)  is 10^6
                and for array of type ( bool) it is 10^7 
*/

int main()
{
    // syntax :  array< data_type , size_of_array > array_name; 
            array<int,20> age;
    
    // 1. Declarations of an array : 
    
            array<int,6>a;              // garbage value at six places in memory
            
            array<int,5>b{0};           // { 0 , 0 , 0 , 0 , 0 }  
            
            array<int,5>c{1};           // { 1 , 0 , 0 , 0 , 0 }
    
            array<int,6>d{1,2,3};       //  { 1 , 2 , 3 , 0 , 0 , 0 }
            
            array<int,6>arr;
            
            arr = { 1, 2 ,3 ,4 , 5 ,6};  // { 1, 2 ,3 ,4 , 5 ,6}
    
    // 2. Functions on array:         
            
            
            arr.at(2);                  // point to the element at index = 2 i.e '3'
            
            arr.begin();                // points to arr[0] 
            
            arr.end();                  // points to arr[size + 1] i.e one right to the end of array 
            
            arr.size();                 // size = 6
            
            arr.front();                // returns element at begining of array i.e a[0] = 1
            
            arr.back();                 // returns element at ending of array i.e a[5] = 6
            
            arr.fill(9);                // { 9 , 9 , 9 , 9 , 9 , 9 }
            
            sort(arr , arr + arr.size());   // sorts an array in increasing order : 1, 2 ,3 ,4 ,5
            
    // 3. accessing or printing an array 
        
        array<int,7>temp = {1,2,3,4,5,6,7};
        
    // 3.1 Using a 'for'  loop-
        
        for(int i = 0 ; i<temp.size();i++)
        {
            cout<<temp[i]<<" ";
        }

         cout<<endl;   
    // 3.2 Using an 'iterator' or 'pointer' - 
        
        array<int,6>::iterator it = temp.begin();
        
        for(it = temp.begin(); it!=temp.end();it++)
        {
            cout<<(*it)<<" ";
        }
        
         cout<<endl;
    // 3.3 Using a 'for each ' loop and 'auto' keyword- 
        
        for(auto i : temp)
        {
            cout<<i<<" ";
        }
        
        
            
    return 0;
}


