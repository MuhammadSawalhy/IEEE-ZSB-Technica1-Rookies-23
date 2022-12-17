// Submission: https://leetcode.com/problems/last-stone-weight/submissions/861054940/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        for (auto s : stones)
            pq.push(s);
        while (pq.size() > 1) {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            if (second == first) continue;
            pq.push(first - second);
        }

        if (pq.empty())
            return 0;
        return pq.top();
    }
};
