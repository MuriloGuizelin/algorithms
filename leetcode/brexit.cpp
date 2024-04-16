#include <iostream>
#include <vector>

using namespace std;

class country {
public:
    int partnersCount = 0;
    int activeContry = true;
    vector<int> partners;
    void addpartner(int n) {
        partners.push_back(n);
        partnersCount = partners.size();
    }
    country() {};
};

vector<country> countrys;

void removePartner(int u){
    countrys[u].partnersCount--;
    if(countrys[u].partnersCount > (countrys[u].partners.size() / 2)) return;
    if(countrys[u].activeContry == false) return;
    countrys[u].activeContry = false;
    for(int partner: countrys[u].partners){
        removePartner(partner);
    }
}

int main() {
    int c, p, x, l;
    cin >> c >> p >> x >> l;
    countrys.assign(c + 1, country());
    while(p--){
        int a, b;
        cin >> a >> b;
        countrys[a].addpartner(b);
        countrys[b].addpartner(a);
    }

    countrys[l].activeContry = false;
    for(int partner: countrys[l].partners){
        removePartner(partner);
    }

    if(countrys[x].activeContry) cout << "stay\n";
    else cout << "leave\n";
}