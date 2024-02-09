#pragma once
#include <iostream>

template <typename T>
class MyVector {
  private:
    T* arr;
    size_t capacity;
    size_t size;

    void resize() {
        capacity *= 2;
        T* newArr = new T[capacity];
        for (size_t i = 0; i < size; ++i) {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

  public:
    MyVector() : capacity(1), size(0) {
        arr = new T[capacity];
    }

    ~MyVector() {
        delete[] arr;
    }

    void push(const T& element) {
        if (size == capacity) {
            resize();
        }
        arr[size++] = element;
    }

    T pop() {
        if (size == 0) {
            throw std::out_of_range("Vector is empty.");
        }
        return arr[--size];
    }

    void remove(size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range.");
        }
        for (size_t i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void insert(size_t index, const T& element) {
        if (index > size) {
            throw std::out_of_range("Index out of range.");
        }
        if (size == capacity) {
            resize();
        }
        for (size_t i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = element;
        size++;
    }

    void sort(bool (*compare)(const T&, const T&) = nullptr) {
        if (compare == nullptr) {
            for (size_t i = 0; i < size - 1; ++i) {
                for (size_t j = 0; j < size - i - 1; ++j) {
                    if (arr[j] > arr[j + 1]) {
                        T temp     = arr[j];
                        arr[j]     = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        } else {
            for (size_t i = 0; i < size - 1; ++i) {
                for (size_t j = 0; j < size - i - 1; ++j) {
                    if (compare(arr[j], arr[j + 1])) {
                        T temp     = arr[j];
                        arr[j]     = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
        }
    }

    const T& get(size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of range.");
        }
        return arr[index];
    }

    void set(size_t index, const T& element) {
        if (index >= size) {
            throw std::out_of_range("Index out of range.");
        }
        arr[index] = element;
    }

    size_t count() const {
        return size;
    }

    size_t firstIndexOf(const T& element, bool (*compare)(const T&, const T&) = nullptr) const {
        if (compare == nullptr) {
            for (size_t i = 0; i < size; ++i) {
                if (arr[i] == element) {
                    return i;
                }
            }
        } else {
            for (size_t i = 0; i < size; ++i) {
                if (compare(arr[i], element)) {
                    return i;
                }
            }
        }
        return -1;
    }
};