#include <iostream>

using namespace std;

int main() {
    int score;
    cout << "score=";
    cin >> score;
    if (score >= 0 && score <= 60) {
        cout << "grede is E" << endl;
    } else if (score >= 60 && score < 70) {
        cout << "grede is D" << endl;
    } else if (score >= 70 && score <= 80) {
        cout << "grede is C" << endl;
    } else {
        cout << "grede is A" << endl;
    }
    return 0;
}
