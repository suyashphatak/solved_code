#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
   int length,qur;
   cin>>length;
   cin>>qur;

   vector<int> v(length);
   int arr[qur][2];
   int ones=0;
   for (int i = 0; i < length; i++)
   {
      cin>>v[i];
      if(v[i])
      {
         ones++;
      }
   }
   
   for (int i = 0; i < qur; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         cin>>arr[i][j];
      }
   }
   
   for (int i = 0; i < qur; i++)
   {
      if(arr[i][0] == 1)
      {
         if(v[arr[i][1]-1])
         {
            ones--;
         }
         else
         {
            ones++;
         }
         v[arr[i][1]-1] = 1-v[arr[i][1]-1];
      }
      else
      {
         if(ones>= arr[i][1])
         {
            cout<<1<<endl;
         }
         else
         {
            cout<<"0"<<endl;
         }
      }
   }   

   
}