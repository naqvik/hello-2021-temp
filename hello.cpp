#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    using namespace std;

    cout << "hello\n";
    cout << "sine table\n"
         <<" x (rad) | sin(x)\n"
         <<"---------+-------\n";

    for (int i=0; i<10; ++i) {
        double x = i*0.01;
        cout << setprecision(7);
        cout << x << "|" << sin(x) << "\n";
    }
}
