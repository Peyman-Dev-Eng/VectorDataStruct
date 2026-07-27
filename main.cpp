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
    Vector<int> V;
    for (int i = 0 ; i < 10 ; ++i) {
        V.Append( i + 1 );
    }
    for (auto it = V.Begin(); it <= V.End(); ++it) {
        cout << *it << endl;
    }
    cout << "---------------------------" << endl;
    V = {1,2,3,4};
    for (auto* it = V.Begin(); it <= V.End(); ++it) {
        cout << *it << endl;
    }
    return 0;
}
