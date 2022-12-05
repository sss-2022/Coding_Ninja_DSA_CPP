#include <bits/stdc++.h>
using namespace std;
#include "StackUsingArray.cpp"

int main()
{
    cout << "\nEnter the size of the Stack you want to create : ";
    int n;
    cin >> n;
    StackUsingArray s(n);
    cout << "Push elements into the stack :-" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        s.push(element);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Size: " << s.size() << " & poped element: " << s.pop() << endl;
    }
}
