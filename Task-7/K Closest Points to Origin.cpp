// Submission: https://leetcode.com/problems/k-closest-points-to-origin/submissions/861061690/
//
#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> &left, vector<int>& right) {
    int d1 = left[0] * left[0] + left[1] * left[1];
    int d2 = right[0] * right[0] + right[1] * right[1];
    return d1 < d2;
}

class Solution {   
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), comp);
        vector<vector<int>> res;
        for (int i = 0; i < k; i++) {
            res.push_back(points[i]);
        }
        return res;
    }
};
