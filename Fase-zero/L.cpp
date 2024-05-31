#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, posicao = 0;
    cin >> n;

    string crianca;
    vector<string> ordem(n), idades(n);
    map<string, int> estado;
    for(int i = 0; i < n; i++){
        cin >> crianca;
        ordem[i] = crianca;
        estado[crianca] ++;
    }

    for(int i = 0; i  < n; i++){
        cin >> crianca;
        idades[i] = crianca;
    }

    for(int i = 0; i  < n; i++){
        if(i != n-1){
            cout << idades[posicao] << " ";
        } else {
            cout << idades[posicao] << endl;
        }
        estado[ordem[i]]--;
        if(ordem[i] == idades[posicao] && i != n-1){
            while(estado[idades[posicao]] != 1){
                posicao++;
            }
        }
    }
}