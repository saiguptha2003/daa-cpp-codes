/*
name: V D Panduranga sai 
Topic: KMP Search
*/
#include<iostream>
#include<vector>
using namespace std;
vector<int> pifunction(string s)
{
     int size=s.length();
     vector<int>tab(size,0);
     for(int i=1;i<size;i++)
     {
          int j=tab[i-1];
          while(j>0 && s[i]!=s[j])
             j=tab[j-1];

          if(s[i]==s[j])
          {
               j++;
          }
          tab[i]=j;
     }
     return tab;
}
int kmp_search(string text,string pattern,vector<int>table)
{
     int i(0);int j(0);
     int answer=0;
     while(i<text.size())
     {
          if(text[i]==pattern[j])
          {
               i++;
               j++;
          }
          else{
               if(j!=0)
               {
                   j=table[j-1]; 
               }
               else
               i++;
          }
          if(j==pattern.size())
          {
               answer=i-pattern.size();
          }
     }
     return answer;
}
int main()
{
     string text;
     string pattern;
     pattern="abcd";
     text="abcdasfasdf";
     auto table=pifunction(pattern);
     cout<<kmp_search(text,pattern,table);
}