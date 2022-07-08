#include <bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC target ("popcnt")
#pragma GCC target ("sse, sseZ, sse3, ssse3, sse4, popcnt, abm, mmx, avx, tune = negative")

#define int long long
#define FOR(i, a, b) for (int i = (a), _##i = (b); i <= _##i; ++i)
#define FORD(i, a, b) for (int i = (a), _##i = (b); i >= _##i; --i)
#define REP(i, a) for (int i = 0, _##i = (a); i < _##i; ++i)

#define _builtin_popcount __builtin_popcountll
#define SZ(x) ((int)(x).size())
#define ALL(a) (a).begin(), (a).end()
#define TWO(x) (1LL<<(x))

inline int gcd(int a, int b) {int r; while (b) {r = a % b; a = b; b = r;}return a;}

// For printing pair, container, etc.
// source: https://quangloc99.github.io/2021/07/30/my-CP-debugging-template.html

template<class U, class V> print_op(pair<U, V>) {
    return out << "(" << u.first << ", " << u.second << ")";
}
template<class Con, class = decltype(begin(declval<Con>()))>
typename enable_if<!is_same<Con, string>::value, ostream&>::type
operator<<(ostream& out, const Con& con) {
    out << "{";
    for (auto beg = con.begin(), it = beg; it != con.end(); ++it)
        out << (it == beg ? "" : ", ") << *it;
    return out << "}";
}
template<size_t i, class T> ostream& print_tuple_utils(ostream& out, const T& tup) {
    if constexpr(i == tuple_size<T>::value) return out << ")";
    else return print_tuple_utils<i + 1, T>(out << (i ? ", " : "(") << get<i>(tup), tup);
}
template<class ...U> print_op(tuple<U...>) {
    return print_tuple_utils<0, tuple<U...>>(out, u);
}

using namespace std;

void fastio(){
    ios_base::sync_with_sdtio(false);
    cin.tie(0), cout.tie(0);
}

int main(){
    fastio();
    


    return 0;
}

