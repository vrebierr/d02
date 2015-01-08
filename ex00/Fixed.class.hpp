#ifndef FIXED_CLASS_H
# define FIXED_CLASS_H
# include <iostream>

class Fixed {
    public:
        Fixed(void);
        Fixed(Fixed const & raw);
        ~Fixed(void);

        Fixed & operator=(Fixed const & rhs);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:
        int     _fixed_point;
        int     const _data;
};

std::ostream &  operator<<(std::ostream & o, Fixed const & i);

#endif
