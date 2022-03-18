#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int mySqrt(int x) {
        int i = 0;
        int r = 66000;
        int l = 0;
        while (true){
            uint mid = l + (r-l)/2;
            uint square = mid * mid;
            if (x == square)
                return mid;
            else if (x < square){
                uint left_square = (mid -1)*(mid -1);
                if (x > left_square)
                    return mid -1;
                
                r = mid;
            }
            else{
                uint right_square = (mid +1)*(mid +1);
                if (x < right_square)
                    return mid;
                
                l = mid + 1;
            }
        }
        return 0;
    }
};

int main()
{
    int x = 8;
    Solution sl;
    int result = sl.mySqrt(x);

    cout << "result: " << result << endl;
    return 0;
}
