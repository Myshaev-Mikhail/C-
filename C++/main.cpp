#include <iostream>
using namespace std;
int main(){
    system("chcp 65001");
    const int n = 3;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "Введите элимент a[" << i << "][" << j << "] ";
            cin >> a[i][j];
            cout << endl;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++){
        int tmp = a[i][i];
        a[i][i] = a[i][3 - i - 1];
        a[i][3 - i - 1] = tmp;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}