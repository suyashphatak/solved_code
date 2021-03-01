#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str;
   getline(cin,str);

   int max = 0; 

   string temp="";
   for (int i = 0; i < str.length(); i++)
   {
      temp = str[i];
      int count = 1;
      for (int j = i+1; j < str.length(); j++)
      { 
         int flag = 1;
         for (int k = 0; k < temp.length(); k++)
         {
            if(temp[k] == str[j])
            {
               flag = 0;
               temp = "";
               if(count > max)
               {
                  max = count;
               }
               break;
            }
         }
         if(flag == 1)
         {
            temp.push_back(str[j]);
            count++;
         } 
         else
         {
            break;
         }  
      }
      if(count > max)
      {
         max = count;
      }
   }


   if(str.empty())
      cout<<"0"<<endl;
   else
   cout<<max<<endl; 
   
   
}