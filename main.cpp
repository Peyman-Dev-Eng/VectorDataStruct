#include <iostream>
#include <ostream>
#include <unordered_map>
#include <string>
#include <vector>
#include <random>
#include "VECTOR/Vector.h"
using namespace std;
random_device rd;
mt19937 mt( rd() );

double RandNumb() {
    uniform_real_distribution<double> distribution( 1, 50 );
    return distribution( mt );
}

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
