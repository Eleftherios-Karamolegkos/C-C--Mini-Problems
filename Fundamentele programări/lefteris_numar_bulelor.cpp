#include <iostream>

using namespace std;

const int n = 5;
int bubble = 1;
int v[n] = {2,1,5,0,3};

int main(){

    int temp;
    while(bubble)   {
        bubble = 0;
        for(int i = 0; i < n-1; i++)    {
            if( v[i] > v[i+1])  {
                temp = v[i];
                v[i] = v[i+1];
                v[i+1] = temp;
                bubble = 1;
            }
        }
    }
    for(int i =0; i<n;i++){
        cout << v[i] << " ";
    }
    return 0;
}