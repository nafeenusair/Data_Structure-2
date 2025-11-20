/*
    Problem: Tower of Hanoi
  Rules:
    1. Three pegs: A, B, C.
    2. n disks of different sizes, initially on A (largest at bottom).
    3. Goal: Move all disks from A to C.
    4. Constraints:
        - Move only one disk at a time.
        - Never place a larger disk on top of a smaller disk.
    Task: Print the steps to solve the puzzle efficiently.
    Note: Minimum moves required is 2^n - 1.
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> A;
vector<int> B;
vector<int> C;

void printTowers() {
    cout << "A=> ";
    for (int x : A) {
        cout << x << " ";
    } cout << endl;

    cout << "B=> ";
    for (int y : B) {
        cout << y << " ";
    } cout << endl;

    cout << "C=> ";
    for (int z : C) {
        cout << z << " ";
    } cout << endl << endl;
}

void toh(vector<int> &A, vector<int> &B, vector<int> &C, int n) {
    //base
    if (n == 1) {
        int x = A.back();
        A.pop_back();
        B.push_back(x);
        printTowers();
        return;
    }
    else {
        toh(A, C, B, n - 1);

        int x = A.back();
        A.pop_back();
        B.push_back(x);
        printTowers();

        toh(C, B, A, n - 1);
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= 1; i--) {
        A.push_back(i);
    }

    printTowers();
    toh(A, B, C, N);

    return 0;
}