#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    int s;
    int v;
    double jarak;
    double srad;

	cout << " Masukkan besar sudut peluncuran :";
    cin >> s;
    cout << " Masukkan kecepatan :";
    cin >> v;
    srad = s * (3.14 / 180);
    cout << " Berikut jarak yang berhasil ditempuh oleh Burung Boro :";
    jarak = v * v * sin(2 * srad) / 10;
    cout << jarak << endl;
    return 0;
}
