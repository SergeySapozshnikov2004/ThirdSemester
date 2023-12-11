#include <iostream>
#include <string>
#include "Node.h"
#include <optional>
using namespace std;


class List
{

private:
    std::optional<Node> headNode;

public:


    /**
     * @brief Инициировать пустой список
     * 
     */
    List();

    /**
     * @brief Добавить элемент под определённым индексом 
     * 
     * @param value значение элемента
     * @param index индекс добавляемого элемента 
     */
    void insert(const double value,const int index);

    /**
     * @brief Добавить элемент в начало списка
     * 
     * @param value значение элемента 
     */
    void pushFront(const double value);

    /**
     * @brief Добавить элемент в конец списка
     * 
     * @param value значение элемента 
     */
    void pushBack(const double value);

    /**
     * @brief Удалить первый элемент
     */
    void frontRemove();

    /**
     * @brief Удалить последний элемент
     */
    void backRemove();

        /**
     * @brief Удалить элемент списка
     * 
     * @param value значение элемента
     * @param index индекс добавляемого элемента 
     */
    void remove(const int index);

    /**
     * @brief Вернуть элемент по индексу 
     * 
     * @param index индекс
     * @return double элемент по индексу
     */
    double at(const int index) const;

};
