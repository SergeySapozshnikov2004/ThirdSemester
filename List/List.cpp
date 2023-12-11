#include "List.h"
#include <stdexcept>

List::List(): headNode(){}

void List::insert(const double value, const int index)
{
    if (index < 0)
    {
        throw std::range_error("Индекс не может быть отрицательным");
    }
    
    if (index == 0)
    {
        return pushFront(value);
    }
    
    
    Node &node = headNode.value();
    for (size_t i = 0; i < index - 1; i++)
    {   
        node = node.nextNode.value();
    }
    Node newNode;
    newNode.value = value;
    newNode.nextNode = node.nextNode;
    node.nextNode = newNode;
}

void List::pushFront(const double value)
{   
    Node newNode;
    newNode.value = value;
    newNode.nextNode = headNode;
    headNode = newNode;
}

void List::pushBack(const double value)
{
    std::optional<Node> &oldTailNode = headNode;
    while (oldTailNode.has_value() && oldTailNode.value().nextNode.has_value())
    {
        oldTailNode = oldTailNode.value().nextNode;
    }
    Node tailNode;
    tailNode.value = value;
    tailNode.nextNode = std::nullopt;
    
    if (oldTailNode.has_value()) 
    {
        oldTailNode.value().nextNode = tailNode;
    }
    else
    {
        headNode = tailNode;
    }    
}

void List::frontRemove()
{
    std::optional<Node> &oldHeadNode = headNode;
    headNode = oldHeadNode.value().nextNode;
    oldHeadNode.reset();
}

void List::backRemove()
{
    if (!headNode.has_value())
    {
        throw std::range_error("Нет значений");
    }
    
    std::optional<Node> &oldPreTailNode = headNode;
    while (oldPreTailNode.has_value() && oldPreTailNode.value().nextNode.has_value() 
    && oldPreTailNode.value().nextNode.value().nextNode.has_value())
    {
        oldPreTailNode = oldPreTailNode.value().nextNode;
    }

    
    if (oldPreTailNode.has_value())
    {
        oldPreTailNode.value().nextNode.reset();
        oldPreTailNode.value().nextNode = std::nullopt;
    }
    else
    {
        headNode.reset();
        headNode = std::nullopt;
    }
    
}

void List::remove(const int index)
{   
    if (index < 0)
    {
        throw std::range_error("Индекс не может быть отрицательным");
    }
    
    if (index == 0)
    {
        return frontRemove();
    }
    
    
    Node &node = headNode.value();
    for (size_t i = 0; i < index - 1; i++)
    {   
        node = node.nextNode.value();
    }

    std::optional<Node> &oldNextNode = node.nextNode;
    node.nextNode = oldNextNode.value().nextNode;
    oldNextNode.reset();
}


double List::at(const int index) const
{
    if (index < 0)
    {
        throw std::range_error("Индекс не может быть отрицательным");
    }
    
    if (index == 0)
    {
        return headNode.value().value;
    }
    
    const Node &node = headNode.value();
    for (size_t i = 0; i < index - 1; i++)
    {   
        node = node.nextNode.value();
    }
    return node.value;
}   
