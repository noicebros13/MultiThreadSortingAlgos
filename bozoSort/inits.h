#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

bool checkSorted(vector<int> vect) {

    int j = 0;
    for (int i = 1; i < int(vect.size()); i++) {
        if (vect.at(j) > vect.at(i)) {
            return false;
        }
        j++;
    }
    return true;
}

void initializeVector(vector<int>& vect, int size) {
    for (int i = 0; i < size; i++) {
        vect.push_back(rand() % 10000 + 1);
    }
}