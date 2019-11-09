#include <vector>
using namespace std;

int findMinPosition(vector<int> &s, int d, int h){
    int min = d;
    for (int i = d + 1; i < h; i++) {
        if (s[i] <= s[min]) {
            min = i;
        }
    }
    return min;
}
void swap(vector<int> &s, int i, int j) {
    int aux = s[i];
    s[i] = s[j];
    s[j] = aux;
}
void selectionSort(vector<int> &s) {
    if (s.size() != 0) {
        for (int i = 0; i < s.size() - 1; i++) {
            int minPos = findMinPosition(s, i, s.size());
            swap(s, i, minPos);
        }
    }
}

void insert(vector<int> &s, int i) {
    for (int j = i; j > 0 && s[j] < s[j - 1]; j--) {
        swap(s, j, j - 1);
    }
}

void insertionSort(vector<int> &s) {
    for (int i = 0; i < s.size(); i++) {
        insert(s, i);
    }
}

int findMaxPosition(vector<int> &s, int d, int h){
    int max = d;
    for (int i = d + 1; i < h; i++) {
        if (s[i] >= s[max]) {
            max = i;
        }
    }
    return max;
}

void cocktailSort(vector<int> &s) {
    if (s.size() != 0) {
        for (int i = 0; i < (s.size() - 1) / 2; i++) {
            int minPos = findMinPosition(s, i, s.size());
            int maxPos = findMaxPosition(s, i, s.size() - i);
            if (maxPos != i) {
                swap(s, i, minPos);
                swap(s, s.size() - 1 - i, maxPos);
            } else {

            }
        }
    }
}

void bubbleSort(vector<int> &s) {
    if (s.size() != 0) {
        int i = 0;
        int j = 0;
        while (i < s.size() - 1) {
            j = 0;
            while (j < s.size() - 1) {
                if (s[j] > s[j + 1]) {
                    swap(s, j, j + 1);
                }
                j++;
            }
            i++;
        }
    }
}

void cocktailShakerSort(vector<int> &s) {
    if (s.size() != 0){
        int i = 0;
        int j = 0;
        while (i < s.size() - 1) {
            j = 0;
            while (j < s.size() / 2) {
                if (s[j] > s[j + 1]) {
                    swap(s, j, j + 1);
                }
                if (s[s.size() - j - 1] < s[s.size() - j - 2]) {
                    swap(s, s.size() - j - 1, s.size() - j - 2);
                }
                j++;
            }
            i++;
        }
    }
}

vector<int> findAllMinPositions(vector<int> s, int d, int h) {
    vector<int> min;
    min.push_back(d);
    for (int i = d + 1; i < h; i++) {
        if (s[i] < s[min[0]]) {
            min.clear();
            min.push_back(i);
        } else if (s[i] == s[min[0]]) {
            min.push_back(i);
        }
    }
    return min;
}

void swapVector(vector<int> &s, int i, vector<int> l) {
    for (int j = 0; j < l.size(); j++) {
        swap(s, i + j, l[j]);
    }
}

void bingoSort(vector<int> &s) {
    if (s.size() != 0) {
        int i = 0;
        while (i < s.size() - 1) {
            vector<int> minPos = findAllMinPositions(s, i, s.size());
            swapVector(s, i, minPos);
            i = i + minPos.size();
        }
    }
}
