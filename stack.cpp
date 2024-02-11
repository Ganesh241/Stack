#include <bits/stdc++.h>
using namespace std;

struct stackG {
    int *arr;
    int cap;
    int top;
    stackG(int c) {
        cap = c;
        top = -1;
        arr = new int[cap];
    }
};

void pushItem(stackG &st, int x) {
    if (st.top == st.cap - 1) {
        cout << "stack is full" << endl;
    } else {
        st.top++;
        st.arr[st.top] = x;
    }
}

int popItem(stackG &st) {
    if (st.top == -1) {
        cout << "stack is empty" << endl;
        return -1;
    } else {
        int rev = st.arr[st.top];
        st.top--;
        return rev;
    }
}

int peekItem(stackG &st) {
    if (st.top == -1) {
        cout << "stack is empty" << endl;
        return -1;
    } else {
        return st.arr[st.top];
    }
}

void printStack(stackG &st) {
    for (int i = st.top; i >= 0; i--) {
        cout << st.arr[i] << " ";
    }
    cout << endl;
}

int main() {

    stackG st(5);
    pushItem(st, 1);
    pushItem(st, 2);
    pushItem(st, 3);
    printStack(st);
    popItem(st);
    printStack(st);

    return 0;
}
