#include <bits/stdc++.h>
using namespace std;

int main()
{

    // queue and stack can't be initialized

    queue<int> que; // first in first out FIFO
    que.push(69);   // add to the right
    que.push(45);
    que.push(100);
    que.pop(); // delete from left
    // que.size();
    cout << que.front() << " : " << que.back();

    cout << "\n===============================\n";
    stack<int> sta; // last in first out LIFO / can access the top only
    sta.push(69);
    sta.push(79);
    sta.push(546);
    sta.pop();
    // sta.size();
    cout << sta.top();

    cout << "\n===============================\n";

    deque<int> deq;
    deq.push_front(5); // from left
    deq.push_back(6);  // from right
    cout << deq.front() << " " << deq.back() << " size = " << deq.size() << endl;
    deq.pop_front(); // from left
    deq.pop_back();  // from right
    deq.clear();
    // deq.empty(); contdion
    cout << "\n===============================\n";

    //===================================
    // type , container , sorting(opp)
    priority_queue<int, vector<int>, greater<int>> pq_inv; // for making the top is the min value
    priority_queue<int> pq;                                // it saves the max element as the top where ever it is.
    pq.push(50);
    pq.push(60);
    pq.push(100);
    pq.pop();
    cout << pq.top() << endl;
    cout << "===============================\n";

    //===================================

    unordered_set<int> unst;        // same as set but not orderderd and the elements are randomized.
    unordered_multiset<int> unmlst; // same as multiset but not orderderd and the elements are randomized.
    set<int> st;                    // prevent repetitions and sorting is auto
    multiset<int> mlst;             // to allow repetitions and count will be usful here.

    st.insert(69);
    st.insert(5);
    st.insert(4);
    st.insert(6);
    st.insert(69);
    st.erase(5); // remove all findings of the number
    // st.erase(st.find(5)); // remove first occurence only
    //  st.count(69);

    auto it = st.find(69);
    cout << *it << endl;

    for (auto it : st)
        cout << it << " ";

    cout << endl;

    cout << *st.begin() << " " << *st.rbegin(); // first and last
    cout << "\n===============================\n";

    //===================================
    vector<pair<string, int>> pai; // to save pair of two variables

    pai.push_back({"karim", 69});
    pai.push_back(make_pair("mohamed", 78));
    pai.push_back(pair<string, int>("abdo", 18));

    for (auto it : pai)
        cout << it.first << " : " << it.second << endl;

    cout << "===============================\n";

    multimap<string, int> mlmp;
    map<string, int> mp; // keys can't be repeated even if diffrent values and they are ordered
    mp["karim"] = 69;    // works with map only
    mp["ali"] = 678;
    mp["osama"] = 456;
    mp.insert({"mohamed", 20}); // works with map and multi map
    mp.insert({"karim", 68});
    // mp.count("ali"); //more usfull in multimap
    mp["karim"] = 79; // to change value of a key

    for (auto e : mp)
        cout << "before erase : " << e.first << " : " << e.second << endl;
    mp.erase("osama");

    for (auto e : mp)
        cout << "after erase : " << e.first << " : " << e.second << endl;

    auto mpit = mp.begin();
    cout << mpit->first << " " << mpit->second << endl;

    return 0;
}
