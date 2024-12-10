/*
Iterators

v.begin()
Pointer to the first element.
O(1)

v.end()
Pointer to the last element.
O(1)

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    // vector<int>::iterator it;
    // cout<<v[v.size()-1];
    // cout<<v.back();
    // cout<<v[0];
    // cout<<v.front();

    // for(auto it=v.begin();it<v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

     for(auto it=v.end()-1;it>=v.begin();it--)
    {
        cout<<*it<<" ";
    }
    return 0;
}