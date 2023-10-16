#include "Data.hpp"
#include "Serialization.hpp"
#include <iostream>

int main()
{
    Data data_kev(42);

    uintptr_t serializedPtr = Serializer::serialize(&data_kev);

    Data *deserializedPtr = Serializer::deserialize(serializedPtr);

    if (deserializedPtr == &data_kev)
    {
        cout << "successful!" << endl;
    }
    else
    {
        cout << "failed!" << endl;
    }

    /*Data data_kev(42);
    Data *ptr_kev = &data_kev;

    uintptr_t serializedPtr = Serializer::serialize(ptr_kev); // Serileştirme işlemi

    std::cout << "Data address: " << ptr_kev << std::endl; // Data nesnesinin adresi
    std::cout << "Serialized address: " << serializedPtr << std::endl; // Serileştirilmiş adres*/

    return 0;
}
