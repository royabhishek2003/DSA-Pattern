#include <bits/stdc++.h>
using namespace std;

void evaluate(stack<int> &num, stack<char> &ope) {
    int val2 = num.top(); num.pop();
    int val1 = num.top(); num.pop();

    char op = ope.top();
    ope.pop();

    if (op == '+') num.push(val1 + val2);
    else if (op == '-') num.push(val1 - val2);
    else if (op == '*') num.push(val1 * val2);
    else if (op == '/') num.push(val1 / val2);
}

int main() {
    string s = "(30+5)*2-8/4";

    unordered_map<char, int> priority;
    priority['+'] = 1;
    priority['-'] = 1;
    priority['*'] = 2;
    priority['/'] = 2;

    stack<int> num;
    stack<char> ope;

    int number = 0;
    bool buildingNumber = false;

    for (char ch : s) {

        if (ch == ' ')
            continue;

        if (isdigit(ch)) {
            number = number * 10 + (ch - '0');
            buildingNumber = true;
        }
        else if (ch == '(') {
            ope.push(ch);
        }
        else if (ch == ')') {

            if (buildingNumber) {
                num.push(number);
                number = 0;
                buildingNumber = false;
            }

            while (!ope.empty() && ope.top() != '(') {
                evaluate(num, ope);
            }

            ope.pop(); // remove '('
        }
        else { // + - * /

            if (buildingNumber) {
                num.push(number);
                number = 0;
                buildingNumber = false;
            }

            while (!ope.empty() &&
                   ope.top() != '(' &&
                   priority[ch] <= priority[ope.top()]) {
                evaluate(num, ope);
            }

            ope.push(ch);
        }
    }

    if (buildingNumber)
        num.push(number);

    while (!ope.empty()) {
        evaluate(num, ope);
    }

    cout << num.top() << endl;
}