#include <iostream>
#include "types.hpp"
#include "Tree.hpp"

template class Tree<string>;
template class Tree<i8>;
template class Tree<i16>;
template class Tree<i32>;
template class Tree<i64>;
template class Tree<u8>;
template class Tree<u16>;
template class Tree<u32>;
template class Tree<u64>;
template class Tree<f32>;
template class Tree<f64>;

template<typename T>
Tree<T>::Node* Tree<T>::insertNode(Tree::Node* node, T data) {
    if (node == nullptr)
        return createNode(data);

    if (data < node->data) {
        node->left = insertNode(node->left, data);
    } else {
        node->right = insertNode(node->right, data);
    }
    return node;
}

template<typename T>
void Tree<T>::insert(T data)
{
    root = insertNode(root, data);
}

template<typename T>
Tree<T>::Node* Tree<T>::removeNode(Tree::Node* node, T data) {
    if (node == nullptr)
        return node;

    if (data < node->data) {
        node->left = removeNode(node->left, data);
    } else if (data > node->data) {
        node->right = removeNode(node->right, data);
    } else {
        if (node->left == nullptr) {
            Node* temp = node->right;
            delete node;
            return temp;
        } else if (node->right == nullptr) {
            Node* temp = node->left;
            delete node;
            return temp;
        }
        node->right = removeNode(node->right, node->data);
    }
    return node;
}

template<typename T>
void Tree<T>::remove(T data)
{
    root = removeNode(root, data);
}

template<typename T>
void Tree<T>::inOrderTraversal(Tree::Node* node)
{
    if (node == nullptr)
        return;

    inOrderTraversal(node->left);
    std::cout << node->data << " ";
    inOrderTraversal(node->right);
}

template<typename T>
void Tree<T>::inOrderTraversal()
{
    inOrderTraversal(root);
}