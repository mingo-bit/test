#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums({1,2,3,4,5});
    for (int i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
    return 0;
}