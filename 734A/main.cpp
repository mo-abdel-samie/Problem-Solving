#include <iostream>

using namespace std;

int main()
{
    int    n = 0;
    string s = "";
    int A = 0;
    int D = 0;

    cin>>n;
    cin>>s;

    for(int i=0; i<s.length(); i++){

        if( s[i] == 'A'){
            A++;
        }else {
            D++;
        }

    }

    if(A>D){
        cout<<"Anton";
    }else if(D>A){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}
