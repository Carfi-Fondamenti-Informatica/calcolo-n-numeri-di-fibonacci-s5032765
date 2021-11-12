#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int k = 1;
    int m = 1;
    int l;
    if(n<2)
        cout<<"errore";
    else {
        cout << k << endl << m << endl;
        for (int i = 0; i < n - 2; i++) {
            l = k + m;
            cout << l << endl;
            m = k;
            k = l;
        }
    }


    return 0;
}
