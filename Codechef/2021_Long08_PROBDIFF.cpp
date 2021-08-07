#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;
        //map
        map<int,int>m;
        m[a1]++;
        m[a2]++;
        m[a3]++;
        m[a4]++;
        if(m.size() == 4 || m.size() == 3)
            cout<<2<<endl;
        else if(m.size()==2)
            if((a1 == a2 && a1 == a4) || (a1 == a3 && a1 == a4) || (a1 == a2 && a1 == a3) || (a2 == a3 && a3 == a4))
                cout<<1<<endl;
            else
                cout<<2<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}
