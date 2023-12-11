#include <iostream>
#include <string>
#include <optional>

struct Node
{
    double value;
    std::optional<Node> nextNode;
};

