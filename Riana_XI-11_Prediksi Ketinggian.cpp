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
    double s;
    double v;
    double ketinggian;
    double sinA;

    cin >> s;
    cin >> v;
    sinA = sin(s * 22 / 7 / 180);
    hasil = ( ( pow(v,2) ) * ( pow(sinA,2) ) ) / 20;
    cout << fixed << setprecision (1) << ketinggian << endl;
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

