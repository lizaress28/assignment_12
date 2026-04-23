#pragma once   
#include <vector>
#include <queue>
#include <algorithm>  
#include <cmath>
#include <functional>

std::vector<int> top_sqrtN_sorted(const std::vector<int>& v){
    const int n = v.size();
    if (n == 0) return {};
    
    const int k = static_cast<int>(std::sqrt(n));

    std::vector<int>, std::greater<int>> minHeap;

    for (int num : v) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }
    std::vector<int> result;
    result.reserve(minHeap.size());
    while(!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    std::reverse(result.begin(), result.end());
    return result;
}