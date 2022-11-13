#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

long bozoSort(vector<int>& vect, long& tries) {
    int size = vect.size();
    for (int i = 0; i < size; i++) {
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << vect.at(i) << " ";
    }

    while (checkSorted(vect) == false) {
        int randPosition1 = 0, randPosition2 = 0;
        while (randPosition1 == randPosition2) {
            randPosition1 = rand() % size;
            randPosition2 = rand() % size;
        }
        swap(vect.at(randPosition1), vect.at(randPosition2));
        tries++;
    }

    return tries;
}
