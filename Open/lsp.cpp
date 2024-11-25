//obj of a super class should be replace with obj of a sub cls without effecting the correctenes os the program.
#include <iostream>

class Bird {
public:
    virtual void move() {
        std::cout << "This bird is moving!" << std::endl;
    }
};

class FlyingBird : public Bird {
public:
    void move() override {
        std::cout << "This bird is flying!" << std::endl;
    }
};

class Penguin : public Bird {
public:
    void move() override {
        std::cout << "Penguin is swimming!" << std::endl;
    }
};

int main() {
    Bird* bird1 = new FlyingBird();//diff here
    bird1->move();  // Flying bird moves (flies).

    Bird* bird2 = new Penguin();
    bird2->move();  // Penguin moves (swims).

    return 0;
}
