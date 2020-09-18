#pragma once
#ifndef CPP_MARATHON_MYSTRING_H
#define CPP_MARATHON_MYSTRING_H
#include <iostream>

namespace CBL {
    template<class T>
    class BasicString {
    public:
        using iterator = T *;
        static const size_t npos = -1ul;

        BasicString() {
            m_size = 0;
            m_buffer = new T[m_size];
        }
        BasicString(const BasicString<T> &str) {
            m_size = str.m_size;
            m_buffer = new T [m_size];
            int i = 0;

            for ( ; i < m_size; i++)
                m_buffer[i] = str.m_buffer[i];
            str[i] = npos;
        }

        BasicString(const BasicString<T> &str, size_t pos, size_t len = npos) {
            m_size = str.m_size - pos;
            m_buffer = new T [m_size];
            int i = 0;

            for ( ; i < m_size; i++, pos++)
                m_buffer[i] = str.m_buffer[pos];
            m_buffer[i] = npos;
        }

        explicit BasicString(const T *str) {
            int count = 0;

            for ( ; str[count]; count++);
            m_size = count;
            m_buffer = new T [m_size];
            for (int i = 0; i < m_size; i++)
                m_buffer[i] = str[i];
            m_buffer[m_size] = npos;
        }

        BasicString(const T *str, size_t n) {
            m_size = n;
            m_buffer = new T [m_size];

            for (int i = 0; i < m_size; i++)
                m_buffer[i] = str[i];
            m_buffer[m_size] = npos;
        }

        BasicString(size_t n, T c) {
            m_size = n;
            m_buffer = new T [m_size];

            for (int i = 0; i < m_size; i++)
                m_buffer[i] = c;
            m_buffer[m_size] = npos;
        }

        BasicString(iterator first, iterator last) {
            m_size = std::distance(first, last);

            m_buffer = new T [m_size];
            while (first != last) {
                *m_buffer = *first;
                first++;
                m_buffer++;
            }
        }

        virtual~BasicString() {
            delete [] m_buffer;
        }

        // iterators
        iterator begin() const;
        iterator end() const;

        // capacity
        size_t length() const;

        // element access
        T& operator[](size_t index) const;
        T& at(size_t index) const;
        T& back() const;T& front() const;

        // modifiers
        BasicString<T>& operator=(const BasicString<T>& str);
        BasicString<T>& operator=(const T* str);
        BasicString<T>& operator=(const T c);
        BasicString<T>& operator+=(const BasicString<T>& str);
        BasicString<T>& operator+=(const T* str);
        BasicString<T>& operator+=(const T c);
        void append(const BasicString<T>& str);
        void append(const T* str);
        void append(const T* str, size_t n);
        void append(size_t n, T c);
        void append(iterator first, iterator last);
        void swap(BasicString<T>& str);

        // string operations
        const T* c_str() const;
        virtual int compare(const BasicString<T>& str) const;
        virtual int compare(const T* str) const;

    protected:
        size_t m_size{0};
        T* m_buffer{nullptr};
    };
} // end namespace CBL


template <class T>
CBL::BasicString<T> operator+(
        const CBL::BasicString<T>& lhs,
        const CBL::BasicString<T>& rhs
);

template <class T>
CBL::BasicString<T> operator+(const T* lhs, const CBL::BasicString<T>& rhs);

template <class T>
CBL::BasicString<T> operator+(const CBL::BasicString<T>& lhs, const T* rhs);

template <class T>
CBL::BasicString<T> operator+(const T lhs, const CBL::BasicString<T>& rhs);

template <class T>
CBL::BasicString<T> operator+(const CBL::BasicString<T>& lhs, const T rhs);

template <class T>
bool operator==(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator==(const T* lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator==(const CBL::BasicString<T>& lhs, const T* rhs);
template <class T>
bool operator!=(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator!=(const T* lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator!=(const CBL::BasicString<T>& lhs, const T* rhs);
template <class T >
bool operator<(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator<(const T* lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator<(const CBL::BasicString<T>& lhs, const T* rhs);
template <class T>
bool operator<=(const CBL::BasicString<T>& lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator<=(const T* lhs, const CBL::BasicString<T>& rhs);
template <class T>
bool operator<=(const CBL::BasicString<T>& lhs, const T* rhs);

/* Derived class additional member functions */
size_t find(const <string class>& str, size_t pos = 0) const;
size_t find(const <char type>* str, size_t pos = 0) const;
size_t find(<char type> c, size_t pos = 0) const;
size_t rfind(const <string class>& str, size_t pos= npos) const;
size_t rfind(const <char type>* str, size_t pos = npos) const;
size_t rfind(<char type> c, size_t pos = npos) const;

