#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "asdfasdfa";
    int fre[26] = {0};

    for (int i = 0; i < s.length(); i++)
        fre[s[i]-'a']++;
    
    char ans ='a';
    int maxF=0;

    for (int i = 0; i < 26; i++)
        if(fre[i]>maxF){
            maxF = fre[i];
            ans = i + 'a';
        }
    
    cout<<maxF<<endl;
    cout<<ans<<endl;

    return 0;
}
