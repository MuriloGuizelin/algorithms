//
#include <iostream>
#include <vector>
using namespace std;

int countNumbers(int N, vector<int> numbers) {
    //Exceções para caso N == 1 ou 0;
    if (N <= 1) {
        return N;
    }

    //Já que a exceção foi tratada o contador começa com 1;
    int count = 1;
    for (int i = 1; i < N; i++) {
        if (numbers[i] != numbers[i - 1]) {
            //Se forem diferentes é feita a contagem
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;
    vector<int> numbers(N);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    cout << countNumbers(N, numbers) << endl;
    return 0;
}
