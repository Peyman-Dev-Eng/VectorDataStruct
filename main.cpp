#include <iostream>
#include <ostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <random>
#include "VECTOR/Vector.h"
using namespace std;

int main() {
    vector<vector<int>> initVEC;
    Vector<Vector<int>> VEC;
    for (int i = 0; i < 10; i++) {
        VEC.Append( {1,2,3,4,5} );
    }
    int c = 1;
    for (const auto &i : VEC) {
        cout << c << " = ";
        for (const auto &j : i) {
            cout << j << " ";
        }
        c++;
        cout << endl;
    }
    return 0;
}
