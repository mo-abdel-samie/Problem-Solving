#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    bool P, V, T;

    int n_IP=0;

    for(int i=0; i<n; i++){
        cin>>P>>V>>T;
        if((P&&V)||(P&&T)||(V&&T)){
            n_IP++;
        }
    }

    cout<<n_IP;


    return 0;
}
