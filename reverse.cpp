#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array(n);

    for(int i=0;i<n;i++){
        cin >> array[i];
    }

    reverse(array.begin(), array.end());

    for(int j=0; j<array.size();j++){
        cout << array[j];
        if(j < array.size()-1 ){
            cout << " ";
        }
    }
    cout << endl;
}