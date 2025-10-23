#include <iostream>
#include <vector>
using namespace std;

// Function to compute LPS (Longest Prefix Suffix) array
void lprefix(vector<int> &lps, string a) {
    int prev = 0;   // length of the previous longest prefix suffix
    int suff = 1;   // current position we are computing

    while (suff < a.size()) {
        if (a[prev] == a[suff]) {
            prev++;
            lps[suff] = prev;
            suff++;
        } else {
            if (prev != 0) {
                // try the previous longest prefix suffix
                prev = lps[prev - 1];
            } else {
                // no prefix suffix match
                lps[suff] = 0;
                suff++;
            }
        }
    }
}

void match(string a, string b, vector<int> &lps) {
    int fir = 0; // index for text
    int end = 0; // index for pattern
    bool found = false;

    while (fir < a.size()) {
        if (a[fir] == b[end]) {
            fir++;
            end++;
        }

        if (end == b.size()) {
            cout << "The pattern starts at index " << fir - end << endl;
            found = true;
            end = lps[end - 1]; // continue searching for next occurrence
        } 
        else if (fir < a.size() && a[fir] != b[end]) {
            if (end != 0)
                end = lps[end - 1];
            else
                fir++;
        }
    }

    if (!found)
        cout << "Pattern not found." << endl;
}

int main() {
    cout << "KMP algorithm\n";
    string s = "ababcabcababd";
    string pattern = "ababd";

    vector<int> lps(pattern.size(), 0);

    // Build the LPS array
    lprefix(lps, pattern);

    cout << "LPS array: ";
    for (int i = 0; i < lps.size(); i++) {
        cout << lps[i] << " ";
    }
    cout << endl;
    
    // String matching 
    match(s, pattern, lps);

    return 0;
}
