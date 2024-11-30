#include <iostream>
#include <string>


class Printable {
public:
    virtual void print() const = 0;
    virtual ~Printable() = default;
};

class Scannable {
public:
    virtual void scan() const = 0;
    virtual ~Scannable() = default;
};

class Copyable {
public:
    virtual void copy() const = 0;
    virtual ~Copyable() = default;
};


class MultiFunctionPrinter : public Printable, public Scannable, public Copyable {
public:
    void print() const override {
        std::cout << "Printing document..." << std::endl;
    }

    void scan() const override {
        std::cout << "Scanning document..." << std::endl;
    }

    void copy() const override {
        std::cout << "Copying document..." << std::endl;
    }
};


class SimplePrinter : public Printable {
public:
    void print() const override {
        std::cout << "Printing document..." << std::endl;
    }
};

int main() {
  
    MultiFunctionPrinter mfp;
    mfp.print();
    mfp.scan();
    mfp.copy();

 
    SimplePrinter sp;
    sp.print();

    return 0;
}
