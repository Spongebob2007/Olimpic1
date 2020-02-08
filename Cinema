#include <iostream>

using namespace std;

int main()
{
    char g;
    int x,y;
    cin>>x;
    cin>>y;
    if(x == 0 || y == 0)
    {
        cout<<"NO SOLUTION";
    }
    if(x == y)
    {
        while(x != 0 && y != 0)
         {
             cout<<"B"<<"G";
             x--;
             y--;
         }
    }   
    if(x > 2*y || y > 2*x)
    {
       cout<<"NO SOLUTION";
    }
    char d;
    while(x != 0 && y != 0)
    {
     cout<<x<<y;
     if(x > y>0)
       {
          cout<<"BGB";
          y--;
          x-=2;
          d = 'B';
       }
     if(y > x>0)
       {
             cout<<"GBG";
            y-=2;
            x--;
            d ='B';
      }
      if(y == x)
      {
          if(d == 'B')
          {
              cout<<"GB";
          }
          if(d == 'G')
          {
              cout<<"BG";
          }
      }
      
    }

}    
