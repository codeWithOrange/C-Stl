#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int arr[5];
    // int size;
    // cin >> size;
    // int *arr = (int *)malloc(sizeof(int) * size);

    // vector<int> vec; // dynamic array

    /*
    1. containers - vector, list, map, set,queue.
    2. algorithms - sort,  100+ , find, count etc.
    3. iterators - begin(), end();
    4. functors - greater<int> ()

    containers
    1. sequence containers - [1,2,3,4] - vector, list, deque.
    2. associative containers - key-based sorting , set, map, {1:"value"}, {2:"asdl;akjsf"}
    3. unordered containers - unordered_set, unoredered_map
    4. containers adapters - stack , queue, priority_queue.

    2. algorithms

    3.iterators
    */

    vector<int> vec = {2, 34, 5, 6};
    // for (int item : vec)
    //     cout << item << " ";

    // cout << endl;
    // for (auto it = vec.rbegin(); it != vec.rend(); ++it)
    // {
    //     cout << *it << " ";
    // }

    sort(vec.begin(), vec.end(), greater<int>());
    for (int item : vec)
        cout << item << " ";
}