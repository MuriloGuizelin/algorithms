#include <bits/stdc++.h>

#define lli long long int

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli e, minutes, hours;
    double v;
    cin >> e >> v;
    minutes = (e * 60) / v;
    hours = ((minutes / 60) + 19) % 24;
    minutes = minutes % 60;
    printf("%02d:%02d\n", hours, minutes);
    return 0;
}