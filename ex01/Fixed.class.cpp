#include "Fixed.class.hpp"

Fixed::Fixed(void) : _bit(8) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const fixed) : _bit(8) {
    std::cout << "Int constructor called" << std::endl;
    this->_raw = (int)roundf(fixed * (1 << this->_bit));
}

Fixed::Fixed(float const fixed) : _bit(8) {
    std::cout << "Float constructor called" << std::endl;
    this->_raw = (int)roundf(fixed * (1 << this->_bit));
}

Fixed::Fixed(Fixed const & src) : _bit(8) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

Fixed &     Fixed::operator=(Fixed const & rhs) {
    std::cout << "Assignation operator called" << std::endl;
    this->setRawBits(rhs.getRawBits());
    return *this;
}

int     Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_raw;
}

void    Fixed::setRawBits(int const raw) {
    this->_raw = raw;
}

int     Fixed::toInt() const {
    return (int)this->_raw / (1 << this->_bit);
}

float   Fixed::toFloat() const {
    return (float)this->_raw / (1 << this->_bit);
}

std::ostream &  operator<<(std::ostream & o, Fixed const & i) {
    o << i.toFloat();
    return o;
}
