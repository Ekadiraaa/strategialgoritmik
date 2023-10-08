#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int n;
    int m;
    int kode1;
    int golongan1;
    int volume1;
    int kode2;
    int golongan2;
    int volume2;
    int jumlah;

	cout << " Masukkan jumlah penduduk DDS (max.1000):";
    cin >> n;
    cout << " Masukkan jumlah desa DDS (max.10):";
    cin >> m;
    cout << " Masukkan kode desa (1,2,dst) :";
    cin >> kode1;
    cout << " Masukkan golongan darah (A=1, B=2, O=3, AB=4) :";
    cin >> golongan1;
    cout << " Masukkan volume darah yang didonorkan (0-500 ml) :";
    cin >> volume1;
    cout << " Masukkan kode desa (1,2,dst) :";
    cin >> kode2;
    cout << " Masukkan golongan darah (A=1, B=2, O=3, AB=4) :";
    cin >> golongan2;
    cout << " Masukkan volume darah yang didonorkan (0-500 ml) :";
    cin >> volume2;
    jumlah = n + n;
    cout << kode1 << endl;
    cout << n << endl;
    cout << kode2 << endl;
    cout << n << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
