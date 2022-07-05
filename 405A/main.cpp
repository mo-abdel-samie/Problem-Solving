#include <bits/stdc++.h>

using namespace std;

int main()
{
    int col; cin>>col;
    int n_box[col-1];

    for(int i=0; i<col; i++){ cin>>n_box[i]; }

    sort(n_box, n_box+col);

    for(int i=0; i<col; i++){ cout<<n_box[i]<<" "; }

    return 0;
}
