#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s, sl, su, nor;
    getline(cin, s);
    nor = s; // Store the original input

    int n = s.size();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sl = s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    su = s;

    int count1 = 0;

    for (int i = 0; i < n; i++)
    {
        if(s)
    }

    cout << count1;
}
