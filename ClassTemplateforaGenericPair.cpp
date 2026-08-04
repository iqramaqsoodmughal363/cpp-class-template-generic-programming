#include <iostream>
using namespace std;

// Class template
template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 f, T2 s) : first(f), second(s) {}

    void display() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};

int main() {
    Pair<int, double> p1(10, 5.5);
    Pair<string, char> p2("Hello", 'A');

    p1.display();
    p2.display();

    return 0;
}
