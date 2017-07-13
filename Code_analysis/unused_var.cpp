//Variable s is unused. Apply quick-fix via Alt+Enter and select an option
//to remove the declaration but leave the initializer call.

#include <iostream>

struct My_Str {
    My_Str() {
        std::cout << "Creating a sample struct" << std::endl;
    }
};

void test() {
    My_Str s;
    //...
}
