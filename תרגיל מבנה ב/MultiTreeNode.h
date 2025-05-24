#ifndef MULTITREENODE_H
#define MULTITREENODE_H

#include "NodeRecord.h"
#include <list>
#include <memory>
#include <iostream>  // Include the necessary header for std::cout

template <typename T>
class MultiTreeNode {
private:
    NodeRecord<T>* record;
    list<MultiTreeNode<T>*> children;

public:
    list<MultiTreeNode<T>*>& getChildren() { return children; }
    std::string getKey() const;
    NodeRecord<T>* getRecord() const;
    MultiTreeNode(NodeRecord<T>* record);
    bool addChild(NodeRecord<T>* newRecord);
    bool removeChild(const T& key);
    void print() const;
    ~MultiTreeNode();
};
// Implementation
template <typename T>
MultiTreeNode<T>::MultiTreeNode(NodeRecord<T>* record) : record(record) {}

template <typename T>
bool MultiTreeNode<T>::addChild(NodeRecord<T>* childRecord) {
    // TODO: complete
    return false;
}

template <typename T>
bool MultiTreeNode<T>::removeChild(const T& key) {
    // TODO: complete
    return false;
}

template <typename T>
NodeRecord<T>* MultiTreeNode<T>::getRecord() const {
    // TODO: complete
    return record;
}

template <typename T>
std::string MultiTreeNode<T>::getKey() const {
    return record->getKey();
}

template <typename T>
void MultiTreeNode<T>::print() const {
    // TODO: complete
}

template <typename T>
MultiTreeNode<T>::~MultiTreeNode() {
    // TODO: complete
}

#endif  // MULTITREENODE_H