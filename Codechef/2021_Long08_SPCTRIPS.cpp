#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;

    while (T--){
        int n, total = 0;
        cin >> n;

        for (int i = 1; i <= n; i++){
            for (int j = i; j <= n; j += i){
                if (j % i == 0){
                    for (int k = i; k <= n; k += j){
                        if (k % j == i)
                            count++;
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}