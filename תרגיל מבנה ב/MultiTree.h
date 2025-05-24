#ifndef MULTITREE_H
#define MULTITREE_H

#include "MultiTreeNode.h"
#include <memory>

template <typename T>
class MultiTree {
private:
    MultiTreeNode<T>* root;

public:
    MultiTree(NodeRecord<T>* rootRecord);
    ~MultiTree();
    T getRootKey() { return root->getKey(); }
    NodeRecord<T>* searchRecord(const T& key);
    bool addRecord(const T& parentKey, NodeRecord<T>* record);
    bool removeRecord(const T& key);
    void print() const;
};

// Implementation
template <typename T>
MultiTree<T>::MultiTree(NodeRecord<T>* rootRecord) : root(new MultiTreeNode<T>(rootRecord)) {}

template <typename T>
MultiTree<T>::~MultiTree() {
    // TODO: complete
}

template <typename T>
bool MultiTree<T>::addRecord(const T& parentKey, NodeRecord<T>* record) {
    // TODO: complete
    return false;
}


template <typename T>
bool MultiTree<T>::removeRecord(const T& key) {
    // TODO: complete
    return false;
}


template <typename T>
NodeRecord<T>* MultiTree<T>::searchRecord(const T& key) {
    // TODO: complete
    return nullptr;  // Return nullptr if not found
}


template <typename T>
void MultiTree<T>::print() const {
    // TODO: complete
}


#endif  // MULTITREE_H
