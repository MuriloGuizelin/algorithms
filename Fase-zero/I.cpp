#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

bitset<1001> contas;

int main() {
    int n, m;
    //n = quantidade de blocos
    //m = tamanho do bloco
    cin >> n >> m;
    string colar;
    cin >> colar;
    vector<int> blocos(n, 0);

    int cont = 0;

    contas.reset();
    for(int i = 0; i < n; i++) {
        cont = 0;
        for(int j = 0; j < m; j++) {
            if(colar[(i * m) + j] == '1') cont++;
        }
        blocos[i] = cont;
        if(contas[cont]) {
            cout << "N\n";
            return 0;
        }
        contas[cont] = 1;
    }

    for(int offset = 1; offset < m; offset++) {
        contas.reset();
        for(int i = 0; i < n; i++) {
            cont = blocos[i];
            int last = (i * m) + offset - 1; //posicao que estou removendo
            int nova = (i * m) + m + offset - 1; //posicao que estou adicionando
            //cout << last << ' ' << (nova % colar.size()) << ' ' << i << '\n';
            cont -= (colar[last] == '1');
            cont += (colar[(nova % colar.size())] == '1');
            blocos[i] = cont;
            if(contas[cont]) {
                //cout << offset << ' ' << i << ' ' << cont << '\n';
                cout << "N\n";
                return 0;
            }
            contas[cont] = 1;
        }
    }

    cout << "S\n";
}