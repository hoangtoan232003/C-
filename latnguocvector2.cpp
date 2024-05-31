#include <iostream>
#include <vector>
using namespace std;

void rev(vector<int> &v) {
    int left = 0;
    int right = v.size() - 1;
    while (left < right) {
        swap(v[left], v[right]);
        left++;
        right--;
    }
}

void nhap(vector<int> &v) {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int x; cin >> x;
        v.push_back(x);
    }
}

void in(vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v;
    nhap(v);
    rev(v);
    in(v);
    return 0;
}
