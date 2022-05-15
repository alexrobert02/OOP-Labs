#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <map>

template <class T, class Y>
struct pereche {
    T key;
    Y value;
};
template <class T, class Y>
class Iterator {
    struct tuple {
        T key;
        Y value;
        int index;
    };
    pereche<T, Y>* ptr;
    int index;

  public:
    Iterator(pereche<T, Y>* ptr, int index) : ptr(ptr), index(index) {
    }
    bool operator!=(Iterator const& other) {
        return ptr != other.ptr;
    }
    Iterator& operator++() {
        ptr++;
        index++;
        return *this;
    }
    tuple operator*() {
        tuple treime;
        treime.key   = ptr->key;
        treime.value = ptr->value;
        treime.index = index;
        return treime;
    }
};

template <class T, class Y>
class Map {
    pereche<T, Y> vector[30];
    int size;

  public:
    Map() {
        size = 0;
    }
    Y& operator[](T key) {
        for (int i = 0; i < size; i++)
            if (vector[i].key == key)
                return vector[i].value;
        vector[size].value = {};
        vector[size].key   = key;
        size++;
        return vector[size - 1].value;
    }
    Iterator<T, Y> begin() {
        return { vector, 0 };
    }
    Iterator<T, Y> end() {
        return { vector + size, size };
    }
    void Set(T key, Y value);
    bool Get(const T& key, Y& value);
    int Count();
    void Clear(Map map);
    bool Delete(const T& key);
    bool Includes(const Map<T, Y>& map);
};

template <class T, class Y>
void Map<T, Y>::Set(T key, Y value) {
    for (int i = 0; i < size; i++)
        if (vector[i].key == key) {
            vector[i].value = value;
            break;
        }
}

template <class T, class Y>
bool Map<T, Y>::Get(const T& key, Y& value) {
    for (int i = 0; i < size; i++)
        if (vector[i].key == key) {
            value = vector[i].value;
            return true;
        }
    return false;
}

template <class T, class Y>
int Map<T, Y>::Count() {
    return size;
}

template <class T, class Y>
void Map<T, Y>::Clear(Map map) {
    size = 0;
    delete[] vector;
}

template <class T, class Y>
bool Map<T, Y>::Delete(const T& key) {
    for (int i = 0; i < size; i++)
        if (vector[i].key == key) {
            for (int j = i; j < size - 1; j++)
                vector[j] = vector[j + 1];
            size--;
            return true;
        }
    return false;
}

template <class T, class Y>
bool Map<T, Y>::Includes(const Map<T, Y>& map) {
    int k = 0;
    for (int i = 0; i < map.size; i++)
        for (int j = 0; j < size; j++)
            if (map.vector[i].key == vector[j].key) {
                k++;
                break;
            }
    if (k == map.size)
        return true;
    return false;
}