#ifndef ARRAY_HPP
#define ARRAY_HPP

#include "exception"
#include "iostream"

template<typename T>
class Array{
private:
    T* arr;
    unsigned int len;
public:
    Array(){
        arr = new T[1];
        arr[0] = NULL;
        this->len = 1;
    }
    Array(unsigned int value){
        arr = new T[value];
        this->len = value;
    }
    Array( const Array &cpy ){
        *this = cpy;
    }
    ~Array(){
        delete[] arr;
    }

    Array& operator=(const Array&obj){
        if (this == &obj)
            return *this;
        len = obj.len;
        arr = new T[len];
        for(unsigned int j = 0; j < len; j++)
            arr[j] = obj.arr[j];
        return *this;
    }

    class OutofBounds : public std::exception
    {
        const char * what() const throw()
        {
            return "Out of Bounds!";
        }
    };

    T& operator[](unsigned int a){
        if (a >= len)
            throw OutofBounds();
        else
            return arr[a];
    }

    unsigned int size(void){
        return len;
    }

};

#endif
