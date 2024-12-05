#include <iostream>
using namespace std;

void babelkowe_for(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tab[] = { 5, 2, 9, 1, 5, 6 };
    int n = 5;

    babelkowe_for(tab, n);

    for (int i = 0; i < n; i++)
        cout << tab[i] << "\t";
}