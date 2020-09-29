#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + i; j++)
            if (i + j < n - 1)
                cout<<' ';
            else
                if (n % 2 == 1) {
                    if (i % 2 == j % 2)
                        cout<<'*';
                    else
                        cout<<' ';
                }
                else {
                    if (i % 2 != j % 2)
                        cout<<'*';
                    else
                        cout<<' ';
                }

        cout<<'\n';
    }
}
