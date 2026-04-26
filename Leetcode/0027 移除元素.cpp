#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>

class Solution {
public:
	int removeElement(vector<int>& num, int val)
	{
		int slowIndex = 0;
		for ( int fastIndex = 0;fastIndex < num.size();fastIndex++ )
		{
			if (num[fastIndex] != val)
			{
				num[slowIndex] = num[fastIndex];
				slowIndex++;
			}
		}
		return slowIndex;
	}
};