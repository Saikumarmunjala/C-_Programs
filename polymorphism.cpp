#include <iostream>
 
class Base {

public:
	//virtual void process(int value) = 0;
    virtual void process(int value) const { 

        std::cout << "Base processing: " << value << std::endl;

    }
	//virtual void process(int value){}

    virtual ~Base() = default;

};
 
class Derived : public Base {

public:

    void process(int value)  { 

        std::cout << "Derived processing: " << value << std::endl;

    }

};
 
int main() {

    Base* b = new Derived();

    b->process(10);

    delete b;

    return 0;

}
 