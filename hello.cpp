#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

std::string shakespearian_diversion() {
    std::string s =
        "Shall I compare thee to a summer's day?\n"
        "Thou art more lovely and more temperate\n"
        "Rough winds to shake the darling buds of May\n"
        "and Summer's lease hath all too short a date\n"
        "Sometime too hot the eye of heaven shines\n"
        "and often is his gold complexion dimm'd\n"
        "and every fair from fair sometime declines\n"
        "by chance or nature's changing course untrimm'd\n"
        "But thy eternal summer shall not fade,\n"
        "nor lose posession of that fair thow owe'st\n"
        "Nor shall Death brag thou wanderest in his shade\n"
        "when in eternal lines to time thou growest\n"
        ;
    return s;
}

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
    cout << shakespearian_diversion();
    cout << "...\nWhat's a good ending?\n\n";
}
