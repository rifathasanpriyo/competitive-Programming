#include<bits/stdc++.h>
#include<unistd.h>
#define CYCLE 60
using namespace std;
int main()
{
    int hour,minute,second;
    cout<<"enter hour,minute,second:";
    cin>>hour>>minute>>second;


    int h=0,m=0,s=0;
    while(1)
    {
        system("cls");
        cout<<"\n\n########STOP WATCH#########\n\n";
        cout<<h<<":"<<m<<":"<<s;
        cout<<"\n\n############################\n\n";
        if(h==hour && m==minute && s==second)
        {
            break;
        }

        s++;
        usleep(1000000);//1,1ta print korbee ar 1 second wait korbe;
        if(s==CYCLE)
        {
            m++;
            s=0;
        }
        if(m==CYCLE)
        {
            h++;
            m=0;
        }
    }




}

