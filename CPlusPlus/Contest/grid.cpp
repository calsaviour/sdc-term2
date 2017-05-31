#include <bits/stdc++.h>
using namespace std;

const int MAX=10010; //size of array
int F[MAX]; //stores results

int main(){
    F[0]=1;
    for(int i=1;i<MAX;i++){// we recursively fill the array
        for(int j=1; j<=6 && i-j>=0 ; j++){
            F[i]+=F[i-j];
        }
    }
    printf("%d\n",F[610]); // we print some values
}