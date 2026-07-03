#include<bits/stdc++.h>
using namespace std;
int main() {
    string s="30+5*2-8/4";
    unordered_map<char, int> priority;
        priority['+'] = 1;
        priority['-'] = 1;
        priority['*'] = 2;
        priority['/'] = 2;

        stack<int> num;
        stack<char> ope;
        int number = 0;

        for (char &ch : s) {
            if (ch == ' ')
                continue;

            if (ch >= '0' && ch <= '9') {
                number = number * 10 + (ch - '0');
            }

            if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                num.push(number);
                number = 0;

                if (ope.empty()) {
                    ope.push(ch);
                }
                else if (priority[ch] > priority[ope.top()]) {
                    ope.push(ch);
                }
                else {
                    while (!ope.empty() && priority[ch] <= priority[ope.top()]) {
                        int val2 = num.top();
                        num.pop();
                        int val1 = num.top();
                        num.pop();

                        char op = ope.top();
                        ope.pop();

                        if (op == '*') num.push(val1 * val2);
                        if (op == '+') num.push(val1 + val2);
                        if (op == '/') num.push(val1 / val2);
                        if (op == '-') num.push(val1 - val2);
                    }
                    ope.push(ch);
                }
            }
        }

        num.push(number);

        while (!ope.empty()) {
            int val2 = num.top();
            num.pop();
            int val1 = num.top();
            num.pop();

            char op = ope.top();
            ope.pop();

            if (op == '*') num.push(val1 * val2);
            if (op == '+') num.push(val1 + val2);
            if (op == '/') num.push(val1 / val2);
            if (op == '-') num.push(val1 - val2);
        }

        cout << num.top() << endl;
    return 0;
}
