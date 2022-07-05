#include <iostream>
#include<cmath>

using namespace std;


int main()
{
    int one_r,one_c,MT_E,min_steps;

    for(int c=1; c<=5; c++){
        for(int r=1; r<=5; r++){
            cin>>MT_E;
            if(MT_E){
                one_c = c;
                one_r = r;
            }
        }
    }

    min_steps = abs(one_r-3)+abs(one_c - 3);

    cout<< min_steps;




    return 0;
}
