#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Student
{
    int roll;
    string name;
};
int main()
{
    vector<int> vec; // empty vector
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    vec.push_back(2); // it adds element to the last
    cout
        << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    vec.push_back(3);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;

    vec.push_back(4);
    vec.push_back(9);
    vec.push_back(91);
    vec.push_back(92);
    vec.push_back(93);
    cout << "size: " << vec.size() << endl;
    cout << "capacity: " << vec.capacity() << endl;
    vec.push_back(94);
    vec.push_back(99);
    cout << "capacity: " << vec.capacity() << endl;
    cout << "size: " << vec.size() << endl;

    // 4>3, capacity 6.

    vector<int> v1 = {1, 23, 4, 5, 66};
    vector<int> v2(5);     // 5 elments with (default 0);
    vector<int> v3(5, 10); // 5 elements with all 10
    vector<string> v4 = {"angad", "harsh", "alskdjfa;s", "alskdjf;a"};
    v4.push_back("raj");
    // v1.push_back(10);

    // ! accessing elements
    // cout << v1[10]; // unsafe, fast, no check
    // cout << v1.at(10) << endl; // safe, slow, bound checking

    cout << v1.front() << endl;

    cout << v1.back() << endl;

    // ! remove elements
    // v1.pop_back();
    // for (int item : v1)
    //     cout << item << " ";
    // v1.erase(v1.begin()+1);  // remove index value element
    // v1.erase(v1.begin() + 1, v1.begin() + 4); // remove in range
    for (int item : v1)
        cout << item << " ";
    cout << '\n';

    cout << v1.max_size() << endl;

    // v1.resize(30);
    // cout << v1.size() << endl;
    v1.push_back(3);
    v1.push_back(4);
    cout << "size: " << v1.size() << endl;
    cout << "capacity: " << v1.capacity() << endl;
    v1.shrink_to_fit();
    cout << "size: " << v1.size() << endl;
    cout << "capacity: " << v1.capacity() << endl;

    // capacity = 5, size=5, capacity = 10 ,
    vector<int> v5;
    v5.reserve(100);
    cout << "size: " << v5.size() << endl;
    cout << "capacity: " << v5.capacity() << endl;

    for (auto itr = v1.rbegin(); itr != v1.rend(); ++itr)
        cout << *itr << " ";
    cout << endl;
    vector<int> v6 = {2, 3, 4};

    v6.insert(v6.begin() + 2, 200);
    v6.insert(v6.begin() + 2, 3, 5);

    for (int item : v6)
        cout << item << " ";

    vector<int> a = {1, 2};
    vector<int> b = {10, 20};
    cout << endl;
    a.swap(b); // a={10,20}, b={1,2};
    for (int item : a)
        cout << item << " ";
    cout << endl;
    for (int item : b)
        cout << item << " ";

    // vector<pair<int,int>>  data

    // b.emplace_back(10); // it add element at the last
    // for (int item : b)
    //     cout << item << " ";
    // pair
    cout << endl;

    pair<int, int>
        p = {2, 3};
    cout << p.first << " " << p.second << endl;

    vector<pair<string, int>> data = {{"a", 1}, {"b", 2}};
    data.push_back({"c", 3});
    data.emplace_back("d", 4);

    for (pair<string, int> item : data)
        cout << item.first << ":" << item.second << endl;

    //! vector of custom data type
    vector<Student> students;
    students.push_back(Student(2, "harsh"));
    students.emplace_back(3, "raj");

    for (auto s : students)
    {
        cout << "name: " << s.name << endl;
        cout << "roll: " << s.roll << endl;
    }

    vector<vector<int>> mt = {
        {1, 23, 3},
        {2, 3, 4},
        {2, 3},
        {2, 4},
    };

    cout << endl;
    for (auto v : mt)
    {
        for (auto item : v)
            cout << item << " ";
        cout << endl;
    }
}