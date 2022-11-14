#include <iostream>
#include <vector>
#include <stdlib.h>
#include <random>
#include <time.h>
#include "inits.h"
#include "Algos.h"

using namespace std;

int main(int argc, char** argv) {
    srand(time(NULL));
    long swaps = 0; //convert to array to display incase all sorts is selected
    int size = 0;
    cout << "Enter array size: ";
    cin >> size;

    vector<int> vect;

    cout << "Initializing..." << endl;
    initializeVector(vect, size);

    //display vector
    for (int i = 0; i < size; i++) {
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << vect.at(i) << " ";
    }

    //get sorting choice
    cout << "\n\n0) All sorts\n1) Bogo Sort\n2) Bozo Sort\n3) Bubble Sort\n4) Insertion Sort\n5) Selection Sort" << endl;
    cout << "Which sort would you like to try?: ";
    int choice = 0;
    cin >> choice;

    cout << "\n\nSorting..." << endl;

    if (choice == 0) {

    }
    else {
        switch (choice) {
        case 1:
            bogoSort(vect, swaps, size);
        case 2:
            bozoSort(vect, swaps, size);
            break;
        case 3:
            bubbleSort(vect, swaps, size);
            break;
        case 4:
            insertionSort(vect, swaps, size);
            break;
        case 5:
            selectionSort(vect, swaps, size);
            break;
        default:
            cout << "Invalid Input" << endl;
            break;
        }
    }
    
    

    cout << "\nIt took " << swaps << " swaps to sort it all, your sorted array is:\n";
    for(int i = 0; i < size; i++){
        if (i % 10 == 0) {
            cout << endl;
        }
        cout << vect.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}
