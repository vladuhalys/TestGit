#include <iostream>
using namespace std;

template<typename T>
T sum(T* values, int amount)
{
	T sum = 0;
	for (size_t i = 0; i < amount; i++)
	{
		sum += values[i];
	}
	return sum;
}

int main()
{
	int size = 4;
	int* _array = new int[size] {1,2,3,4};
	int result = sum<int>(_array, size);

	cout << "Sum = " << result << endl;
	return 0;
}