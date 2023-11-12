#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <unordered_map>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int, int> IntPair;

template <typename T>
struct GreaterCmp {
    bool operator()(T&a, T&b) {
        return a.second > b.second;
    }
};


template <typename T>
void print(T x) {
    for (auto it : x) {
        cout << it << ",";
    }
    cout << endl;
}