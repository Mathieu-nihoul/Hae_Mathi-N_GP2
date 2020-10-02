#pragma once
#include <functional>

template<typename T>
class DynArr {
public:
	T* data = nullptr;
	size_t allocSize = 0;
	DynArr(int size) {
		this->allocSize = size;
		data = (T*)malloc(size * sizeof(T));
		for (int i = 0; i < size; i++) {
			data[i] = {};
		}
	}

	virtual ~DynArr() {
		free(data);
	};

	T& Get(int index) {
		if (index > allocSize || index < 0) { throw "assert:out of bound"; }
		return data[index];
	}

	void Set(int index, const T & value) {
		if (index < 0) { throw "assert:out of bound"; }
		if (index >= allocSize) { Resize((index + 1)); }
		data[index] = value;
	}

	void Resize(int newAllocSize) {
		if (newAllocSize < allocSize)
			return;
		int allocSizeByte = newAllocSize * sizeof(T);
		data = (T*)realloc(data, allocSizeByte);
		for (int i = allocSize; i < newAllocSize; ++i) {
			data[i] = {};
		}
		allocSize = newAllocSize;
	}
	void reverse() {
		for(int i =0 ;i< ceil(allocSize/2) ;i++)
		{
			float temp = data[i];
			data[i] = data[allocSize - i -1];
			data[allocSize - i-1] = temp;
		}
	}
	int lenght()const {
		return allocSize;
	}
	void push_back(const T & elem) {
		Set(lenght(), elem);
	}
	void append(const DynArr<T> & arr) {
		for (int = 0; i < arr.lenght(); i++)
			push_back(arr.data[i]);
	}

	void iter(std::function<void(T)>_iter) {
		for (int i = 0; i < lenght(); i++) 
		{
			_iter(data[i]);
		}
		
	}
};

