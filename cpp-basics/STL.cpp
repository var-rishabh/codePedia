#include <bits/stdc++.h>
using namespace std;

int main() {


    // pairs
    pair<int, int> p1 = { 1, 2 };
    pair<int, pair<int, int>> p2 = { 1, { 2, 3 } };
    // cout << p1.first << " " << p2.second.first << endl;
    pair<int, int> arr[] = { { 1, 2 }, { 3, 4 } };
    // cout << arr[0].first << " " << arr[1].second << endl;


    // vectors
    vector<int> v1;
    v1.push_back(1);    // entering a value in a container
    v1.emplace_back(2); // increasing size of the vector dynamically, it is faster than push_back
    v1.push_back(3);
    v1.push_back(4);

    vector<pair<int, int>> v2;
    v2.push_back({ 1, 2 });   // pushing values in container
    v2.emplace_back(3, 4);  // pushing values in container as a pair without

    vector<int> v3(5, 100); // 5 elements of value 100
    vector<int> v4(5);      // 5 elements with garbage value
    vector<int> v5(v3);     // copying a vector

    // iterators
    // v1.begin   -> it points to the memory location of the first element
    // v1.end()   -> it point towards the memory location right after the last element
    // v1.back()  -> last element memory location
    vector<int>::iterator iter = v1.begin();
    // vector<int>::iterator it = v1.end();
    // cout << *(iter) << " " << *(it + 10);

    // loop
    // for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
    //     cout << *(it) << " " << *(++it) << endl;
    // }
    // cout << endl;
    // for (auto it : v3) {
    //     cout << it << " ";
    // }

    // deleting an element
    // v1.erase(index);        -> erase index is given, and the vector is reshuffled
    // v1.erase(start_index, end_index);    -> end_index is not included 

    // inserting an element
    // v1.insert(index, the_element);
    // v1.insert(index, number_of_elements, the_element);

    // v1.size()        -> reutrns the size
    // v1.pop_back();   -> pops the last element
    // v1.swap(v2);     -> swaps the vectors
    // v1.clear();      -> cleans the entire vector
    // v1.empty();      -> true if empty


    // list, dequeue        -> both have same fucntions as vector
    list<int> l1;
    deque<int> d1;
    // l1.push_back(2);
    // l1.push_front(1);
    // l1.emplace_back(3);
    // l1.emplace_front(0);
    // d1.pop_back();
    // d1.pop_front();


    // stack
    stack<int> st1;
    stack<int> st2;
    // st1.push(1);
    // st1.emplace(0);
    // st1.pop();
    // st1.top();
    // st1.empty();
    // st1.swap(st2);


    // queue, priority queue
    queue<int> q1;
    priority_queue<int> q2;
    // q1.push(1);
    // q1.emplace(2);
    // q1.back();
    // q1.front();
    // q1.pop();


    // set   -> unique and sorted
    set<int> s1;
    s1.insert(1);
    s1.emplace(2);
    s1.insert(3);
    auto it1 = s1.find(3);
    s1.erase(2);
    s1.count(1);

    // multiset   -> sorted
    multiset<int> ms1;
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(2);
    ms1.insert(1);
    ms1.erase(1); // all 1s are erased
    ms1.count(1);


    // unordered set   -> unique
    // has better complexity
    unordered_set<int> us1;


    // map (storing and fetching) takes O(log n) time - best avg and worst case
    // - in map any data type can be the key

    // unordered_map (storing and fetching) takes O(1) time in best and avg, but O(n) in worst case
    // - in unordered map only int, double or char can be the key

    // map  -> key value pairs
    map<int, int> mp1;
    map<int, pair<int, int>> mp2;
    map<pair<int, int>, int> mp3;
    unordered_map<char, int> mp5;
    // stored in sorted order of keys with all unique keys
    mp1[1] = 5;
    mp1.insert({ 3, 1 });
    mp3[{2, 3}] = 10;


    // sorting
    // sort(a, a+n);
    sort(v1.begin(), v1.end());
    // sort(v1.begin(), v1.end(), greater<int>);  // sort in descending order
    // bool comparator_function(pair<int, int> p1, pair<int, int> p2) {
    //     if (p1.second < p2.second) return true;
    //     if (p1.second > p2.second) return false;
    // }
    // sort(a, a+n, comparator_function);  // sort according to comparator


    int num = 7;
    int count = __builtin_popcount(num); // returns the number of set bits
    cout << count << endl;

    // string permutation
    string s = "132";
    sort(s.begin(), s.end());
    // generate permutations
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // int max = max_element(a, a+n);
    // int min = min_element(a, a+n);

    return 0;
}