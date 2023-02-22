#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int moda(vector<int> v) {
    unordered_map<int, int> freq;
    int max_freq = 0, moda = 0;

    for (int i = 0; i < v.size(); i++) {
        freq[v[i]]++;
        if (freq[v[i]] > max_freq) {
            max_freq = freq[v[i]];
            moda = v[i];
        }
    }

    return moda;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 4, 4, 5, 5, 6};
    int m = moda(v);
    cout << "A moda do vetor é: " << m << endl;
    return 0;
}
