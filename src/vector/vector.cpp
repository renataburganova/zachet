#include "vector.hpp"

#include <iostream>
#include <stdexcept>

using RBurganova::Vector;

template<typename T>
const std::size_t Vector<T>::START_CAPACITY = 10;

template<typename T>
Vector<T>::Vector() {
	//TODO
}

template<typename T>
Vector<T>::~Vector() {
	//TODO
}

template<typename T>
bool Vector<T>::has_item(const T& value) const noexcept {
	//TODO
}

template<typename T>
bool Vector<T>::insert(const std::size_t position, const T& value) {
	//TODO
}

template<typename T>
void Vector<T>::print() const noexcept {
	//TODO
}

template<typename T>
void Vector<T>::push_back(const T& value) {
	//TODO
}

template<typename T>
bool Vector<T>::remove_first(const T& value) {
	//TODO
}
