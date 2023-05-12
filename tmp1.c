#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;
int a[100010];
int L[100010];
int main(void)
{
    stack<int> st;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= N; i++)
    {
        while (st.size() && a[st.top()] < a[i])
        {
            L[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    for (int i = 1; i <= N; i++)
    {
        cout << L[i] << endl;
        ;
    }
    return 0;
}
