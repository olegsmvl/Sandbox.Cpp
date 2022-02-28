#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(12);
    st.push(4);
    st.push(8);

    cout << "size: " << st.size() << endl;
    cout << st.top() << " " << &st.top() << endl;
    st.pop();
    cout << st.top() << " " << &st.top() << endl;
    st.pop();
    cout << st.top() << " " << &st.top() << endl;
    cout << "size: " << st.size() << endl;

    return 0;
}
