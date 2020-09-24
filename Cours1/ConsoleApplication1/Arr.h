#pragma once

template<typename T>

class Arr
{
public:
	T* data;
	int size = 0;
	Arr(int _size) 
	{
		data = new T[_size];
		for (int i = 0; i < _size; i++) 
		{
			data[i] = {};
		}
		this->size = _size;
	}
	/*virtual ~Arr() 
	{
		delete[] data;
		cout << "delete" << endl;

	}*/

	T Get(int a) {
		if (size < a)throw "out of bound max";
		if (a < 0)throw "out of bound min";
		
		else
			return data[a];
	}
	T Set(int a , T b) {
		if (size < a)throw "out of bound max";
		if (a < 0)throw "out of bound min";

		else
			data[a] = b;
			return data[a];
	}
};

