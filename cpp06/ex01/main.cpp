#include <iostream>

struct Data
{
	int i;
	float f;
};

static uintptr_t serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

static Data *deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data data;
	data.i = 1;
	data.f = 1.2f;

	uintptr_t int_ptr = serialize(&data);
	Data *ptr_data = deserialize(int_ptr);

	std::cout << ptr_data->i << std::endl;
	std::cout << ptr_data->f << std::endl;

	return (0);
}