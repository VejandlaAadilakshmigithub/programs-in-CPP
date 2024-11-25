#include <iostream>

class Button {
public:
    virtual void click() = 0;
};

class WindowsButton : public Button {
public:
    void click() override {
        std::cout << "Windows Button Clicked!" << std::endl;
    }
};

class MacButton : public Button {
public:
    void click() override {
        std::cout << "Mac Button Clicked!" << std::endl;
    }
};

class ButtonFactory {
public:
    static Button* createButton(const std::string& type) {
        if (type == "Windows") {
            return new WindowsButton();
        } else if (type == "Mac") {
            return new MacButton();
        }
        return nullptr;
    }
};

int main() {
    Button* button = ButtonFactory::createButton("Windows");
    button->click();
    delete button;
    return 0;
}
