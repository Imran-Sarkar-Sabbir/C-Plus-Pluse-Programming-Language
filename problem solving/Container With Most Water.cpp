#include <iostream>
#include <vector>
#include <cmath>


template<typename T>
void printVect(std::vector<T> &vec) {
    for(T t : vec) {
        std::cout << t << " ";
    }
    std::cout << std::endl;
}


class Solution {

private:
    int min(int X, int Y)  {
        return X < Y ? X : Y;
    }

    int max(int X, int Y)  {
        return X > Y ? X : Y;
    }

public:
    int maxArea(std::vector<int>& height) {
    
        int i = 0,
            j = height.size() - 1;

        int curr = 0,
            max = 0;

        while (i <= j)
        {
            curr = this->min(height[i], height[j]) * (j-i);
            max = this->max(curr, max);

            if(height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return max;
    }
};



int main() 
{
    std::vector<int> myVec = {1,8,6,2,5,4,8,3,7};
    // printVect(myVec);

    Solution s;
    std::cout << s.maxArea(myVec);

    std::getchar();
    return 0;
}