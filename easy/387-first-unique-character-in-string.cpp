#include <bits/stdc++.h>

class Solution {
public:
    queue<char> queue;
    unordered_map<char, int> hash;
    int firstUniqChar(string s) {
        for(auto x: s) {
            hash[x]++;
            queue.push(x);
        }
        while(hash[queue.front()] > 1 && !queue.empty()) {
         queue.pop();
        }
        if (queue.empty()) return -1;
        return s.find(queue.front());
        return -1;
    }
};