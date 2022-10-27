#include "Converter.hpp"

const char *Converter::BadStrException::what() const throw()
{
    return "Bad input string. Input number!";
}

Converter::Converter() : _input(""), _err(false), _val(0.0f) {}

Converter::Converter(const Converter &copy) : _input(copy.getInput()), _err(copy.getErr()), _val(copy.getVal())
{
}

Converter::Converter(const std::string &input) : _input(input), _err(false), _val(0.0f)
{
    try
    {
        char *str = NULL;
        if (std::isprint(_input[0]) && !std::isdigit(_input[0]) && _input[1] == '\0')
            _val = _input[0];
        else
        {
            _val = strtod(_input.c_str(), &str);
            if (_val == 0.0f &&
                (_input[0] != '+' && _input[0] != '-' && !std::isdigit(_input[0])))
                throw Converter::BadStrException();
            if (*str && std::strcmp(str, "f"))
                throw Converter::BadStrException();
        }
    }
    catch (const std::exception &e)
    {
        _err = true;
        std::cerr << e.what() << '\n';
    }
}

bool Converter::getErr(void) const
{
    return _err;
}

std::string Converter::getInput(void) const
{
    return _input;
}

double Converter::getVal(void) const
{
    return _val;
}

char Converter::getChar(void) const
{
    return static_cast<char>(_val);
}

int Converter::getInt(void) const
{
    return static_cast<int>(_val);
}

float Converter::getFloat(void) const
{
    return static_cast<float>(_val);
}

double Converter::getDouble(void) const
{
    return static_cast<double>(_val);
}

static void printChar(std::ostream &o, const Converter &c)
{
    o << "char: ";
    if (std::isnan(c.getVal()) || std::isinf(c.getVal()) ||
        c.getVal() > static_cast<double>(std::numeric_limits<char>::max()) ||
        c.getVal() < static_cast<double>(std::numeric_limits<char>::min()))
    {
        o << "impossible" << std::endl;
        return;
    }
    if (!std::isprint(c.getChar()))
    {
        o << "Non displayable" << std::endl;
        return;
    }
    o << '\'' << c.getChar() << '\'' << std::endl;
}

static void printInt(std::ostream &o, const Converter &c)
{
    o << "int: ";
    if (std::isnan(c.getVal()) || std::isinf(c.getVal()) ||
        c.getVal() > static_cast<double>(std::numeric_limits<int>::max()) ||
        c.getVal() < static_cast<double>(std::numeric_limits<int>::min()))
    {
        o << "impossible" << std::endl;
        return;
    }
    o << c.getInt() << std::endl;
}

static void printFloat(std::ostream &o, const Converter &c)
{
    o << "float: ";
    if (std::isnan(c.getFloat()) || std::isinf(c.getFloat()))
    {
        o << std::showpos << c.getFloat() << "f" << std::endl;
        return;
    }
    if (floor(c.getVal()) == ceil(c.getVal()))
        o << c.getFloat() << ".0f" << std::endl;
    else
        o << c.getFloat() << "f" << std::endl;
}

static void printDouble(std::ostream &o, const Converter &c)
{
    o << "double: ";
    if (std::isnan(c.getVal()) || std::isinf(c.getVal()))
    {
        o << std::showpos << c.getDouble() << std::endl;
        return;
    }
    if (floor(c.getVal()) == ceil(c.getVal()))
        o << c.getDouble() << ".0" << std::endl;
    else
        o << c.getDouble() << std::endl;
}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &assign)
{
    this->_err = assign.getErr();
    this->_input = assign.getInput();
    this->_val = assign.getVal();
    return (*this);
}

std::ostream &operator<<(std::ostream &o, const Converter &c)
{
    if (c.getErr())
        return o;
    printChar(o, c);
    printInt(o, c);
    printFloat(o, c);
    printDouble(o, c);
    return o;
}
