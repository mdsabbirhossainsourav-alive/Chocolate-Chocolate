#include <bits/stdc++.h>
using namespace std;
int getChoco(int wrappers) 
{
    if (wrappers < 3)
    {
        return 0;  
    }
    return getChoco((wrappers/3) + (wrappers%3)) + (wrappers/3);
}

int main() 
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << (n/5 + getChoco(n/5)) << endl;
    }
    return 0;
}
