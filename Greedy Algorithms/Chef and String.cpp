/**
problem link-> https://www.codechef.com/learn/course/greedy-algorithms/LIGRDSA01/problems/XYSTRP
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int ans = 0;
        string s;
        cin >> s;
        int n = s.size();

            for(int i=1; i<n; i++)
        {

            if(s[i] != s[i-1])
            {
                ans++;
                i++;
            }
        }
        cout << ans <<'\n';
    }
    return 0;
}
