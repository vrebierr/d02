#include "Fixed.class.hpp"

Fixed::Fixed() : _bit(8) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) : _bit(8) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed &     Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return *this;
}

int     Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixed_point;
}

void    Fixed::setRawBits(int const raw) {
    this->_fixed_point = raw;
}
