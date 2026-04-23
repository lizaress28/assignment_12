#pragma once
#include <vector>
#include <queue>
#include <functional>

int min_merge_cost(const std::vector<int>& files){
    if (files.size() <= 1) return 0;       
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap(files.begin(), files.end());

int total=0;

while (minHeap.size() > 1) {
    int first = minHeap.top();
    minHeap.pop();
    int second = minHeap.top();
    minHeap.pop();
    int mergedCost = first + second;
    total += mergedCost;
    minHeap.push(mergedCost);
    }
    return total;
}