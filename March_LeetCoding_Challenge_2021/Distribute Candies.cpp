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
   int max = n/2;
   set<int, greater<int> > s1;
   
   for (int i = 0; i < n; i++)
   {
      s1.insert(v[i]);
   }

   if(s1.size() <= max)
      cout<<s1.size();
   else
      cout<<max;

   
   

}