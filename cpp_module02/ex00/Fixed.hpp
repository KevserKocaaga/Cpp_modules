#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

class Fixed
{
    private:
        int fixnum;
        static const int num_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& cpy);
        ~Fixed();
        void    operator=(const Fixed& opr);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};
