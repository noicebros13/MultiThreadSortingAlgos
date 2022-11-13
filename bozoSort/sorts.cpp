#include <iostream>
#include <vector>
#include <stdlib.h>
#include <random>
#include <time.h>
#include "inits.h"
#include "Bozo.h"

using namespace std;



int main(int argc, char** argv) {
    srand(time(NULL));
    long tries = 0;
    int size = 0;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> vect;

    cout << "Initializing..." << endl;
    initializeVector(vect, size);

    cout << "Sorting..." << endl;
    bozoSort(vect, tries);

    cout << "\nIt took " << tries << " tries to sort it all, your sorted array is:\n";
    for(int i = 0; i < size; i++){
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << vect.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}
