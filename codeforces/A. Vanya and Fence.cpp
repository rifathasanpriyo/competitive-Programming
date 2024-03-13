#include<iostream>
using namespace std;
int main()
{
      int frnd,hight,count1=0;
      int frnd_hight,count=0;
      cin>>frnd>>hight;
      for(int i=0;i<frnd;i++)
      {
             cin>>frnd_hight;
             if(frnd_hight>hight)
             {
                    count++;
             }
             else
             {
                    count1++;
             }
      }
      count=count*2;
      int sum=count+count1;
      cout<<sum;
}
