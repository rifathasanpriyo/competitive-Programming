#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    int counting =0;
    string a;
    string b;
    cin >> a;
    cin >> b;

    int s = a.length();



          for (int i=0; i<s; i++)
            {
               int x = abs(a[i] - b[i]);
               if (x == 32 || x==0)
               {
                    continue;
               }
               else if (a[i]>b[i])
               {
                   counting = 1;
                   break;
               }
               else
                {counting = -1;
                    break;
                }
            }
            cout << counting <<endl;

    return 0;
}
