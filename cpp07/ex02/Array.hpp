#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
private:
	std::size_t	_size;
	T				*_array;

public:
	Array(): _size(0), _array(new T[0]())
	{
	};

	Array(std::size_t n): _size(n), _array(new T[n]())
	{
	};

	Array(const Array &A): _size(A._size), _array(new T[A._size])
	{
		for (std::size_t i = 0; i < _size; ++i)
			_array[i] = A._array[i];
	};

	Array &operator=(const Array &A)
	{
		if (this == &A)
			return (*this);
		_size = A._size;
		delete[] _array;
		_array = new T[_size]();
		for (std::size_t i = 0; i < _size; ++i)
			_array[i] = A._array[i];
		return (*this);
	};

	virtual ~Array()
	{
		delete[] _array;
	};

	T &operator[](std::size_t index)
	{
		if (index >= _size)
			throw out_of_the_limits();
		return (this->_array[index]);
	};

	std::size_t size() const
	{
		return (_size);
	}

	class out_of_the_limits: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("This element is out of the limits");
		};
	};
};

#endif