#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>
# include <cmath>

class Fixed {
    public:
        Fixed(void);
        Fixed(int const fixed);
        Fixed(float const fixed);
        Fixed(Fixed const & raw);
        ~Fixed(void);

        Fixed & operator=(Fixed const & rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt(void) const;
        float   toFloat(void) const;

    private:
        int     _raw;
        int     const _bit;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);

#endif
