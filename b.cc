#include <typeinfo>
#include <iostream>
#include "h.h"

void __attribute__ ((visibility ("default"))) Bar() {
    const std::type_info& ti = typeid(MyClass);
    std::cout << "typeid of MyClass: " << ti.hash_code() << std::endl;
}
