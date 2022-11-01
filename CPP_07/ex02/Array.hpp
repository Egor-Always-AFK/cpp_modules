#include <iostream>

template<typename T>
class Array
{
private:
	T * 			_arr;
	unsigned int	_size;
public:
	class TooBig : public std::exception {
	public:
		const char* what() const throw() {
			return "Too big index";
		};
	};
	Array();
	Array(const Array & copy);
	Array(const unsigned int & n);

	~Array();

	unsigned int size(void) const;

	Array & operator=(const Array & assign);
	T & operator[](const unsigned int index);
	const T & operator[](const unsigned int index) const;
};

template <typename T>
Array<T>::Array() : _arr(NULL), _size(0) {}

template <typename T>
Array<T>::Array(const Array & copy)
{
	_size = copy._size;
	_arr = new	T[copy._size]();
	for (unsigned int i = 0; i < copy._size; i++)
		_arr[i] = copy._arr[i];
}

template <typename T>
Array<T>::Array(const unsigned int & n)
{
	_size = n;
	_arr = new T[n]();
}

template <typename T>
Array<T>::~Array()
{
	if (_size != 0)
	{
		delete[] _arr;
		_arr = NULL;
		_size = 0;
	}

}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (_size);
}

template <typename T>
Array<T> & Array<T>::operator=(const Array & assign)
{
	if (this->_size != 0)
	{
		delete[] this->_arr;
		this->_arr = NULL;
		_size = 0;
	}
	this->_size = assign._size;
	this->_arr = new T[assign._size]();
	for (unsigned int i = 0; i < assign._size; i++)
		this->_arr[i] = assign._arr[i];
	return (*this);
}

template <typename T>
T & Array<T>::operator[](const unsigned int index)
{
	if (index >= _size || !_arr)
		throw Array<T>::TooBig();
	else
		return (_arr[index]);
}

template <typename T>
const T & Array<T>::operator[](const unsigned int index) const
{
	if (index >= _size || !_arr)
		throw Array<T>::TooBig();
	else
		return (_arr[index]);
}