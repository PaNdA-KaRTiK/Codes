#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int a1[3],a2[3];
        cin>>a1[0]>>a1[1]>>a1[2];
        cin>>a2[0]>>a2[1]>>a2[2];
        
        int sum1=0;
        sum1 += a1[0]+a1[1]+a1[2];
        int sum2=0;
        sum2 += a2[0]+a2[1]+a2[2];
        
        //simple comparison
        if(sum1 > sum2){
            cout<<1<<endl;
            continue;
        }else{
            cout<<2<<endl;
            continue;
        }
    }
    return 0;
}