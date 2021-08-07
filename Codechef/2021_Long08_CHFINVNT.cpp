#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
      int n,p,k,q,s;
      cin>>n>>p>>k; 

      int total = 0; 
      q = p%k;
      q--; 
      
      s = (((n-1)/k)*k);
      s = n-s-1; 
      
      if(q>s)
        total += (s+1)*((n-1)/k+1)+ (q-s)*((n-1)/k);
      else
        total += ((n-1)/k+1)*(q+1); 
      
      for(int i = q+1; i <= n-1; i+=k) {
        total++; 

        if(i == p) {
          cout << total << endl;
          break; 
        }
        
      }

    }

  return 0;
}
