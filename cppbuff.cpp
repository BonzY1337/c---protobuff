#include <iostream>
#include "phone.pb.h"

int main()
{
    tutorial::PhoneNumber* PhoneNumber = new tutorial::PhoneNumber();
    PhoneNumber->set_number("55555-55555");
    PhoneNumber->set_type(500);
    std::string Serialized = PhoneNumber->SerializeAsString();
    std::cout << Serialized;
    std::cout << PhoneNumber->number();
    std::cout << PhoneNumber->type();
    std::cout << PhoneNumber->DebugString();
}
