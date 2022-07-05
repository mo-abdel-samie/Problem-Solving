#include <iostream>

using namespace std;

int main()
{
    int   number_frinds=0;
    int   min_roud_width=0;
    float fence_hight=0;
    float friends_hight;

    cin>> number_frinds >> fence_hight;

    for(int i=0; i<number_frinds; i++){
        cin>>friends_hight;
        if(friends_hight<=fence_hight){
            min_roud_width++;
        }else{
            min_roud_width+=2;
        }
    }

    cout<<min_roud_width;

    return 0;
}
