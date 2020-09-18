#pragma once

#include <iostream>
#include <vector>
#include <initializer_list>

template <typename T>
class ClassWithInitializerList final {
 public:
    template <typename... Args>
    ClassWithInitializerList(Args&&... args) : m_vecOfArs({args ...}) {}
    ClassWithInitializerList(const std::initializer_list<T> lst) {
        for (auto &i : lst)
            m_vecOfArs.push_back(i);
    }
    ClassWithInitializerList(const std::vector<T>& vec) {
        for(auto &i : vec)
            m_vecOfArs.push_back(i);
    }

    void outputVector() const {
        for (auto &item : m_vecOfArs)
            std::cout << item << std::endl;
    }

 private:
    std::vector<T> m_vecOfArs;
};
