#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        string s="";
        int a[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string r[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        int p;
        
        while(num)
        {
            p = num/a[i];
            num = num%a[i];
            while(p--)
            {
                s+=r[i];
            }
            i--;
        }
        
        return s;
    }
};

int main()
{
    int n;
    cout<<"Enter any number between 1 and 4000"<<endl;
    cin>>n;

    Solution s1;

    cout<<"Roman Value of number: "<<s1.intToRoman(n)<<endl;
    
    return 0;
}