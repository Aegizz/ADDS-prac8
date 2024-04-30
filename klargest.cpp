#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <queue>
int kth_largest(std::vector<int> values, int k){
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    for (int i = 0; i < values.size(); i++){
        pq.push(values[i]);
    }
    for (int i =0; i < k - 1; i++){
        pq.pop();
    }
    return pq.top();
}