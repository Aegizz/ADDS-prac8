#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    int n = values.size();
    for (int i = 0; i < n; i++){
        pq.push(values[i]);

    }
    for (int i = 0; i < (n-k)-1; i++){
        pq.pop();
    }
    return pq.top();
}