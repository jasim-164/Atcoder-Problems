#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sx,sy,tx,ty;
    cin>>sx>>sy>>tx>>ty;
    int dx=tx-sx;
    int dy=ty-sy;
    string s="";
    if(dx>0)
    {
      for(int i=0;i<dx;i++)
      {
          s+='R';
      }
      if(dy>0)
      {
      for(int i=0;i<dy;i++)
      {
          s+='U';
      }
      }
      else
      {
       for(int i=0;i<abs(dy);i++)
      {
          s+='D';
      }
      }

      //2nd iter
      if(s[0]=='L')
      {
        for(int i=0;i<abs(dx);i++)
      {
          s+='R';
      }
      }
      else
      {
          for(int i=0;i<abs(dx);i++)
      {
          s+='L';
      }
      }
      if(s[abs(dx)]=='U')
      {
      for(int i=0;i<abs(dy);i++)
      {
          s+='D';
      }
      }
      else
      {
     for(int i=0;i<abs(dy);i++)
      {
          s+='U';
      }
      }
      //3rd iter
      if(s[0]=='L')
      {
          s+='R';
      }
      else
      {
          s+='L';
      }
      if(dy>0)
      {
         for(int i=0;i<=abs(dy);i++)
      {
          s+='U';
      }
         for(int i=0;i<=dx;i++)
      {
          s+='R';
      }
      s+='D';
      }
      else
      {
        for(int i=0;i<=abs(dy);i++)
      {
          s+='D';
      }
          for(int i=0;i<=dx;i++)
      {
          s+='R';
      }
      s+='U';
      }
      //4th iter

      s+='R';
      if(dy>0)
      {
      for(int i=0;i<=abs(dy);i++)
      {
          s+='D';
      }
      for(int i=0;i<=dx;i++)
      {
          s+='L';
      }
      s+='U';
      }

      if(dy<0)
      {
      for(int i=0;i<=abs(dy);i++)
      {
          s+='U';
      }
      for(int i=0;i<=dx;i++)
      {
          s+='L';
      }
      s+='D';
      }


  cout<<s<<endl;
}
else
    {
      for(int i=0;i<abs(dx);i++)
      {
          s+='L';
      }
      if(dy>0)
      {
      for(int i=0;i<dy;i++)
      {
          s+='U';
      }
      }
      else
      {
       for(int i=0;i<abs(dy);i++)
      {
          s+='D';
      }
      }

      //2nd iter
      if(s[0]=='L')
      {
        for(int i=0;i<abs(dx);i++)
      {
          s+='R';
      }
      }
      else
      {
          for(int i=0;i<abs(dx);i++)
      {
          s+='L';
      }
      }
      if(s[abs(dx)]=='U')
      {
      for(int i=0;i<abs(dy);i++)
      {
          s+='D';
      }
      }
      else
      {
     for(int i=0;i<abs(dy);i++)
      {
          s+='U';
      }
      }
      //3rd iter
      if(s[0]=='L')
      {
          s+='R';
      }
      else
      {
          s+='L';
      }
      if(dy>0)
      {
         for(int i=0;i<=abs(dy);i++)
      {
          s+='U';
      }
      if(s[0]=='R')
         for(int i=0;i<=abs(dx);i++)
      {
          s+='L';
      }
      s+='D';
      }
      else
      {
        for(int i=0;i<=abs(dy);i++)
      {
          s+='D';
      }
          for(int i=0;i<=dx;i++)
      {
          s+='L';
      }
      s+='U';
      }
      //4th iter

      s+='L';
      if(dy>0)
      {
      for(int i=0;i<=abs(dy);i++)
      {
          s+='D';
      }
      for(int i=0;i<=dx;i++)
      {
          s+='R';
      }
      s+='U';
      }

      if(dy<0)
      {
      for(int i=0;i<=abs(dy);i++)
      {
          s+='U';
      }
      for(int i=0;i<=dx;i++)
      {
          s+='R';
      }
      s+='D';
      }
  cout<<s<<endl;
    }

    return 0;
}
