#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void func(int cnt, int start) {
    if (cnt == M) {
        for (int x : vec) cout << x << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i <= N; i++) {
        vec.push_back(i);
        func(cnt + 1, i + 1);
        vec.pop_back();
    }
}

int main() {
    cin >> N >> M;
    func(0, 1);
}
