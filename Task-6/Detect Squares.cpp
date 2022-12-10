// Submission:
// https://leetcode.com/problems/detect-squares/submissions/857317229/

#include <bits/stdc++.h>
using namespace std;

class DetectSquares {
    vector<vector<int>> points;
    map<vector<int>, int> freq;

  public:
    DetectSquares() {}

    void add(vector<int> point) {
        points.push_back(point);
        freq[point]++;
    }

    int count(vector<int> point) {
        int cnt = 0;
        for (const vector<int> &opposite : points) {
            // opposite is the point, that will make a diagonal with the query
            // point in the square
            if (abs(point[1] - opposite[1]) != abs(point[0] - opposite[0]))
                // not square
                continue;
            if (opposite == point)
                // zero area
                continue;
            vector<int> other, other_opposite;
            other = {point[0], opposite[1]};
            other_opposite = {opposite[0], point[1]};
            cnt += freq[other] * freq[other_opposite];
        }
        return cnt;
    }
};
