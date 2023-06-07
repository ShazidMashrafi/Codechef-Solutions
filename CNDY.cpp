#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[2 * n];
        int count;
        bool terminate= false;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < 2 * n; i++)
        {
            count=0;
            for (int j = i; j < 2 * n; j++)
            {
                if(terminate) break;
                if (a[i] == a[j])
                {
                    count++;
                    if (count == 3) 
                    {
                        terminate=true;
                        break;
                    }
                }
            }
            if(terminate) break;
        }
        output:
        if (count < 3)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}