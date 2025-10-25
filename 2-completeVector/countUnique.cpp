#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v6 = {1, 2, 3, 1, 1, 1, 3, 3};
    sort(v6.begin(), v6.end());
    v6.erase(unique(v6.begin(), v6.end()), v6.end());
    int uniquecount = v6.size();
}