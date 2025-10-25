#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
void print(vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

vector<int> returnSq(vector<int> &v)
{
    vector<int> result;
    for (auto item : v)
        result.push_back(item * item);

    return result;
}
int main()
{
    vector<int> v = {2, 34, 3};
    print(v); // call by reference,

    sort(v.begin(), v.end()); // by default , sorted in ascending order, increasing order
    sort(v.begin(), v.end(), greater<int>());

    vector<int> v1 = {2, 34, 5, 10, 20, 2};
    reverse(v1.begin(), v1.end());

    // binary search
    sort(v1.begin(), v1.end());

    bool found = binary_search(v1.begin(), v1.end(), 5);
    cout << "found: " << found;
    cout << endl;

    vector<int> duplicateArray = {3, 3, 1, 1, 1, 3, 3, 5};

    sort(duplicateArray.begin(), duplicateArray.end());
    auto itr = unique(duplicateArray.begin(), duplicateArray.end());
    duplicateArray.erase(itr, duplicateArray.end());
    cout << endl;
    for (int item : duplicateArray)
        cout << item << " ";

    auto it = find(v1.begin(), v1.end(), 10);
    if (it != v.end())
        cout << "found at: " << (it - v1.begin());
    cout << endl;

    // int arr[5] = {1, 3, 0, -1, 3};
    // sort(arr, arr + 5);
    // for (int item : arr)
    //     cout << item << " ";

    // print(v1);

    vector<int> v2 = {2, 3, 5};
    int sum = accumulate(v2.begin(), v2.end(), 0);
    cout << "sum: " << sum << endl;
    // cout << endl;
    // vector<int> result = returnSq(v2);
    // for (int item : result)
    //     cout << item << " ";
    // vector<int> resultVector(3);

    // transform(v2.begin(), v2.end(), resultVector.begin(), [](int item)
    //           { return item + 2; });
    // for (int x : resultVector)
    //     cout << x << " ";

    // question : remove all zeroes from the vector {1,3,0,0,0}
    vector<int> v3 = {0, 0, 1, 0, 3};
    vector<int> v4 = {1, 2, 3, 1, 1, 5};
    v4.erase(remove(v4.begin(), v4.end(), 1), v4.end());
    for (int item : v4)
        cout << item << " ";
}