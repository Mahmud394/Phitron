/*
Problem Statement

There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

Note: You need to solve it using  Stack and Queue only.

Input Format

First line will contain  and .
Second line will contain stack  with  values.
Third line will contain queue  with  values.
Constraints

Output Format

Output YES if they were same, otherwise NO.
Sample Input 0

5 5
10 20 30 40 50
50 40 30 20 10
Sample Output 0

YES
Sample Input 1

4 4
10 20 30 40
10 20 30 40
Sample Output 1

NO
Sample Input 2

5 4
1 2 3 4 5
5 4 3 2
Sample Output 2

NO
*/
#include <bits/stdc++.h>

using namespace std;



int main()
{
    stack<int>st;
    queue<int>q;
    int n,m;
    cin>>n>>m;
    if(n!=m)
    {
        cout<<"NO";
       
    }
    else{
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        q.push(y);
    }
    // queue<int>q1;
    // while(!st.empty())
    // {
    //     q1.push(st.top());
    //     st.pop();
    // }
  
     bool flag = true; 
    while (!st.empty() && !q.empty()) {
        if (st.top() != q.front()) {
            flag = false;
            break;
        }
        st.pop();
        q.pop();
    }
     if (!st.empty() || !q.empty()) {
        flag = false;
    }

    
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
}
