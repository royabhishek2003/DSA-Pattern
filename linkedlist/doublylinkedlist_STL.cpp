#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    for (int x : l) {
        cout << x << " ";
    }

// Common operations on list

// l.push_back(5);    // insert at end
// l.push_front(3);   // insert at front
// l.pop_back();      // remove last
// l.pop_front();     // remove first
// l.front();         // first element
// l.back();          // last element
// l.size();          // number of elements
// l.empty();         // check if empty

// get the address of the first and last element of the list
auto startaddress = l.begin();
auto endaddress = prev(l.end());  //gives address of one past the end 


cout<<"Start element: " << (*startaddress) << endl;
cout<<"End element: " << (*endaddress) << endl;


    return 0;
}