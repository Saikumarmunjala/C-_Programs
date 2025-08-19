#include <iostream>
 
struct Base {
     int value;
};
 
struct Left : virtual Base {
    
};
struct Right : virtual Base {

 };
 
struct Bottom : Left, Right {
    void set_value(int v) {
        value = v; 
    }
};
 
int main() {
    Bottom b;
    b.set_value(42);
    std::cout<<b.value<<std::endl;
    return 0;
}

