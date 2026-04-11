#include <iostream>
#include <stack>
using namespace std;

int main (int argc, char *argv[]) {
    
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << "top = " << st.top() << endl;

    st.pop();

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    
    cout << endl;

    return 0;
}
