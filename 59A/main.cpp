#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s,s_lower,s_uper; cin>>s;
    int uper=0,lower=0;

    for(int i=0; i<s.length(); i++){
        s_lower += tolower(s[i]);
        s_uper  += toupper(s[i]);
        if(islower(s[i])){
            lower++;
        }else{
            uper++;
        }
    }

    if(uper > lower){
        cout<<s_uper;
    }else{
        cout<<s_lower;
    }


    return 0;
}
