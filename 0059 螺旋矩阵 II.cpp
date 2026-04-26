#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>

class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n, vector<int>(n, 0));
        int startx = 0;
        int starty = 0;
        int offset = 1;
        int mid = n / 2;
        int loop = n / 2;
        int count = 1;

        while (loop) {
            int i = startx;
            int j = starty;

            for (j; j < n - offset; j++)
            {
                res[i][j] = count;
                count++;
            }

            for (i; i < n - offset; i++)
            {
                res[i][j] = count;
                count++;
            }

            for (j; j > starty; j--)
            {
                res[i][j] = count;
                count++;
            }

            for (i; i > startx; i--)
            {
                res[i][j] = count;
                count++;
            }

            loop--;
            startx++;
            starty++;
            offset++;
        }

        if (n % 2)
        {
            res[mid][mid] = count;
        }

        return res;
    }


};