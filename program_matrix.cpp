#include <iostream>

using namespace std;

int main()
{
    int n, i, j;

    cout << "Masukkan nlai n : ";
    cin >> n;
    cout << endl;

    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            if (i == j){
                cout << "1 ";
            }else{
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
