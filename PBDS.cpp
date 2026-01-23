#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define len(x) int((x).size())

// Ordered Set (no duplicates)
template <class T>
using ordered_set = tree<
    T,
    null_type,
    less<T>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;

// Ordered Multiset (duplicates allowed using pair trick)
template <class T>
using ordered_multiset = tree<pair<T, int>,null_type,less<pair<T, int>>,rb_tree_tag,tree_order_statistics_node_update>;



int main(){
    ordered_multiset mt;
    
}
