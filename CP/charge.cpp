#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int q_dist[k];
        for(int i=0;i<k;i++)
        {
            cin>>q_dist[i];
        }

        int d = 0;

        for(int i=1;i<s.length();i++)
        {
            if((s[i]=='0' && s[i-1]=='0') || (s[i]=='1') && s[i-1]=='1')
            {
                d+=2;
            }
            else
            {
                d+=1;
            }
        }

        for(int i=0;i<k;i++)
        {
            int j = q_dist[i]-1;

            if(s[j]=='0')
            {
                s[j] = '1';
            }
            else
            {
                s[j] = '0';
            }
            if(j > 0){
                if(s[j - 1] == s[j]){
                    d++;
                }else{
                    d--;
                }
            }
            if(j < n - 1){
                if(s[j + 1] == s[j]){
                    d++;
                }else{
                    d--;
                }   
            }

            cout<<d<<endl;

        }
    }
    return 0;
}