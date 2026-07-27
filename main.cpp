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
    Vector<Vector<int>> V;
    for (int i = 0; i < 3; i++) {
        V.Append( {1,2,3} );
    }
    int counter = 1;
    for (const auto& i : V) {
        cout << counter++ << " = ";
        for (const auto& j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
