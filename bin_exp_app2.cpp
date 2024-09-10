#include <iostream>
#include <vector>
using namespace std;

vector<int> applyPerm(vector<int> seq, vector<int> perm) {
    vector<int> newSeq(seq.size());
    for (int i = 0; i < seq.size(); i++) {
        newSeq[i] = seq[perm[i]];
    }
    return newSeq;
}

vector<int> permute(vector<int> seq, vector<int> perm, long long k) {
    while (k > 0) {
        if (k & 1) seq = applyPerm(seq, perm);
        perm = applyPerm(perm, perm);
        k >>= 1;
    }
    return seq;
}

int main() {
    vector<int> sequence = {10, 20, 30, 40};
    vector<int> permutation = {2, 0, 1, 3};

    long long k = 10000;  // Number of times to apply the permutation

    vector<int> result = permute(sequence, permutation, k);

    cout << "Result after applying permutation " << k << " times: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
