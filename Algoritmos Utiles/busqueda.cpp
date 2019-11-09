#include <vector>
#include <string>
using namespace std;

bool busquedaLineal(vector<int> &s, int x) {
    int j = 0;
    while (j < s.size() && s[j] != x) {
        j = j + 1;
    }
    return j < s.size();
}

bool busquedaBinaria(vector<int> &s, int x) {
    if (s.size() == 0) {
        return false;
    } else if (s.size() == 1) {
        return s[0] == x;
    } else if (x <= s[0]) {
        return s[0] == x;
    }else if (x >= s[s.size() - 1]) {
        return s[s.size() - 1] == x;
    } else {
        int low = 0;
        int high = s.size() - 1;
        while (low + 1 < high) {
            int mid = (low + high) / 2;
            if (s[mid] <= x) {
                low = mid;
            } else {
                high = mid;
            }
        }
        return s[low] == x;
    }
}

bool matches(string &t, string &p, int i) {
    int k = 0;
    while (k < p.size() && t[i + k] == p[k]) {
        k++;
    }
    return k == p.size();
}

bool busquedaString(string &t, string &p) {
    bool res = false;
    if (t.size() != 0) {
        for (int i = 0; i <= t.size() - p.size(); i++) {
            if (matches(t, p, i)) {
                res = true;
            }
        }
    }
    return res;
}

vector<int> calcularPi(string &p) {
    vector<int> pi(p.size());
    int i = 0;
    for (int j = 1; j < p.size(); j++) {
        while (i > 0 && p[i] != p[j]) {
            i = pi[i - 1];
        }
        if (p[i] == p[j]){
            i++;
        }
        pi[j] = i;
    }
    return pi;
}

bool busquedaKMP(string &t, string &p) {
    vector<int> pi = calcularPi(p);
    int l = 0;
    int r = 0;
    while (r < t.size() && r - l < p.size()) {
        if (t[r] == p[r - l]) {
            r++;
        } else if ( l == r) {
            r++;
            l++;
        } else {
            l = r - pi[r - l];
        }
    }
    return r - l == p.size();
}
