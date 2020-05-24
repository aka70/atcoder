#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,mi=1000000,ma=-1000000;
    int i,b;
    long long sum=0;
    cin >> n;

    for(i=0;i<n;i++){
        cin >> b;
        mi = min(mi,b);
        ma = max(ma,b);
        sum +=b;
    }

    cout << mi << " " << ma << " " << sum << endl;
}