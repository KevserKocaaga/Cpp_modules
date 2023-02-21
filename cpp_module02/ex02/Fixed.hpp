#include <iostream>
#include <string>
#include <math.h>
using std::cout;
using std::string;
using std::endl;
using std::ostream;

class Fixed
{
    private:
        int fixnum;
        static const int num_bits = 8;
    public:
        Fixed();
		Fixed(const int x);
		Fixed(const float c);
        Fixed(const Fixed& cpy);
        ~Fixed();
        void	operator=(const Fixed& opr);
        int		getRawBits(void) const;
        void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

        bool	operator == (const Fixed& opr);
        bool	operator != (const Fixed& opr);
        bool	operator < (const Fixed& opr);
        bool	operator > (const Fixed& opr);
        bool	operator >= (const Fixed& opr);
        bool	operator <= (const Fixed& opr);

        void	operator + (Fixed const &opr);
        void	operator / (Fixed const &opr);
        void	operator * (Fixed const &opr);
        void	operator - (Fixed const &opr);


        Fixed& operator ++ ( );
		Fixed& operator -- ( ); 
		Fixed operator ++ (int); 
		Fixed operator -- (int); 

};

ostream& operator<<(ostream &obj, const Fixed& fix);
