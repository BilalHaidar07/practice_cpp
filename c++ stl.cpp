#include <iostream>
#include<map>
#include<string>
using namespace std;


int main() {

    map<string, int> marks;

    marks["Ali"] = 85;
    marks["Sara"] = 92;
    marks["Ahmed"] = 78;

    cout << marks["Sara"];

    return 0;
}
