#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    int er1;
    cin>>er1;
    v.erase(v.begin()+(er1-1));
    int er2,er3;
    cin>>er2>>er3;
    v.erase(v.begin()+(er2-1),v.begin()+(er3-1));
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
