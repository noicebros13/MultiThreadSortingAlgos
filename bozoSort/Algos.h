#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

/*
Time complexity: BogoSort
Best: O(N)
Average: O((N+1)!)
Worst: O((N+1)!)

Bogo sort reshuffles all the data and rechecks if data is sorted
*/
long bogoSort(vector<int>& vect, long& swaps, int size) {
    vector<int> temp;
    while (checkSorted(vect) == false) {
        for (int i = 0; i < size; i++) {
            swap(vect.at(i), vect.at(rand() % size));
            swaps++;
        }
    }
    return swaps;
}

/*
Time complexity: BozoSort
Best: O(N)
Average: O((N+1)!)
Worst: O((N+1)!)

Bozo sort swapts 2 random elements and rechecks if data is sorted
*/
long bozoSort(vector<int>& vect, long& swaps, int size) {
    while (checkSorted(vect) == false) {
        int randPosition1 = 0, randPosition2 = 0;
        while (randPosition1 == randPosition2) {
            randPosition1 = rand() % size;
            randPosition2 = rand() % size;
        }
        swap(vect.at(randPosition1), vect.at(randPosition2));
        swaps++;
    }
    return swaps;
}

/*
Time complexity: Bubble Sort
Best: O(N)
Average: O(N^2)
Worst: O(N^2)

Bozo sort swapts 2 random elements and rechecks if data is sorted
*/
long bubbleSort(vector<int>& vect, long& swaps, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (vect.at(j) > vect.at(j + 1)) {
                swap(vect.at(j), vect.at(j + 1));
                swaps++;
            }
        }
    }
    return swaps;
}

long insertionSort(vector<int>& vect, long& swaps, int size) {
    for (int i = 1; i < size; i++) {
        int line = vect.at(i);
        int j = i - 1;

        while (j >= 0 && vect.at(j) > line) {
            swap(vect.at(j + 1), vect.at(j));
            j--;
            swaps++;
        }
        vect.at(j + 1) = line;
    }
    return swaps;
}

long selectionSort(vector<int>& vect, long& swaps, int size) {
    for (int i = 0; i < size - 1; i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (vect.at(j) < vect.at(smallestIndex)) {
                smallestIndex = j;
            }

            if (smallestIndex != i) {
                swap(vect.at(smallestIndex), vect.at(i));
                swaps++;
            }
        }
    }
    return swaps;
}