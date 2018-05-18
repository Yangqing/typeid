#include <typeinfo>
#include <iostream>
#include "h.h"

void __attribute__ ((visibility ("default"))) Foo() {
    const std::type_info& ti = typeid(MyClass);
    std::cout << "typeid of MyClass: " << ti.hash_code() << std::endl;
}
