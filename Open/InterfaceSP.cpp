#include <iostream>
using namespace std;

// Fat Interface - Violates ISP
class IPrinter {
public:
    virtual void print() = 0;
    virtual void scan() = 0;
    virtual void fax() = 0;
    virtual void copy() = 0;
    virtual ~IPrinter() {}
};

class BasicPrinter : public IPrinter {
public:
    void print() override {
        cout << "Printing document." << endl;
    }

    void scan() override {
        cout << "Error: Scanning not supported." << endl;  // Not supported in BasicPrinter
    }

    void fax() override {
        cout << "Error: Faxing not supported." << endl;  // Not supported in BasicPrinter
    }

    void copy() override {
        cout << "Error: Copying not supported." << endl;  // Not supported in BasicPrinter
    }
};

class MultifunctionPrinter : public IPrinter {
public:
    void print() override {
        cout << "Printing document." << endl;
    }

    void scan() override {
        cout << "Scanning document." << endl;
    }

    void fax() override {
        cout << "Faxing document." << endl;
    }

    void copy() override {
        cout << "Copying document." << endl;
    }
};

class Scanner : public IPrinter {
public:
    void print() override {
        cout << "Error: Printing not supported." << endl;  // Not supported in Scanner
    }

    void scan() override {
        cout << "Scanning document." << endl;
    }

    void fax() override {
        cout << "Error: Faxing not supported." << endl;  // Not supported in Scanner
    }

    void copy() override {
        cout << "Error: Copying not supported." << endl;  // Not supported in Scanner
    }
};

int main() {
    IPrinter* printer = new BasicPrinter();
    printer->print(); // Works fine
    printer->scan();  // Not supported, violates ISP
    printer->fax();   // Not supported, violates ISP

    delete printer;

    return 0;
}
