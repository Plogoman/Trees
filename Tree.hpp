#ifndef TREES_TREE_HPP
#define TREES_TREE_HPP
#pragma once

template<typename T>
class Tree {
public:
    struct Node {
        T data;
        Node* left;
        Node* right;
    };
    Node* root;
    Node* createNode(T data)
    {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    Tree() : root(nullptr) {}

    Node* insertNode(Node* node, T data);
    void insert(T data);
    Node* removeNode(Node* node, T data);
    void remove(T data);
    void inOrderTraversal(Node* node);
    void inOrderTraversal();
};

#endif //TREES_TREE_HPP