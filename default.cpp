#include <iostream>

class Counter {
private:
    unsigned int count;

public:
    Counter() : count(0) {}

    int get_count() {
        return count;
    }
};

int main() {
    Counter c1, c2;
    std::cout << "c1 = " << c1.get_count() << std::endl;
    std::cout << "c2 = " << c2.get_count() << std::endl;

    return 0;
}
