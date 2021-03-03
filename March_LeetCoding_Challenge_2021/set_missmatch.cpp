/*
You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<int> v(n);
   for (int i = 0; i < n; i++)
   {
      cin>>v[i];
   }

   vector<int> store(v.size(),0);

   for(int i=0; i< v.size(); i++)
   {
      store[v[i]-1]++;
   }   


   int dup,rep;
   for(int i= 0; i < store.size(); i++)
   {
      if(store[i] == 0)
         rep = i+1;
      if(store[i] > 1)
         dup = i+1;
   }
   cout<<dup<<" "<<rep<<endl;
   
   
}