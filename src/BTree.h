#pragma once


#include "Tree.h"
#include "BIterator.hpp"
#include <vector>
#include <memory>

/**
* @brief Class for implementing B Tree
*/
template<typename T>
class BTree : public Tree<T> {
public:
    class BNode;
public:
    explicit BTree(int min_degree);

    void insert(const T& key) override;
    void remove(const T& key) noexcept override;
    void print() const noexcept override;

    /**
     * @brief: function to find element by value
     * @return return BIterator of current element (or BIterator of nullptr)
     */
    BIterator<T> find(const T& key) const noexcept;


    /**
     * @return: BIterator of the smallest element in tree tree
     */
    BIterator<T> begin() const noexcept;

    /**
     * @return: BIterator of the greatest element in tree tree
     */
    BIterator<T> end() const noexcept;

    /**
     * @return: BIterator of the smallest element in ReverseIterationPolicy tree tree
     */
    BIterator<T> rbegin() const noexcept;

    /**
    * @return: BIterator of the greatest element in ReverseIterationPolicy tree tree
    */
    BIterator<T> rend() const noexcept;

public:
    /**
    * @brief: Minimum degree of all nodes in BTree
    */
    int min_degree;

/**
* @brief: Class for implementing Node in BTree - BNode
*/
class BNode : public std::enable_shared_from_this<BNode>, public Tree<T>::Node {
    public:
        explicit BNode(bool is_leaf, int min_degree);
        ~BNode() {
            keys.clear();
            children.clear();
        }

        std::shared_ptr<typename Tree<T>::Node> next() noexcept override;
        std::shared_ptr<typename Tree<T>::Node> previous() noexcept override;

        /**
        * @brief: Print all elements rooted with element
        */
        void print();

        /**
        * @brief: Insert element but with rule that this element is not full
        */
        void insertNonFull(const T& key);


        /**
        * @return: BIterator based on find function for Node
        */
        BIterator<T> findIterator(const T& key);

        /**
        * @return: index of this element in parent->children array
        */
        int getParentIndex();

        /**
        * @brief: Finds a key in subtree rooted with this node.
        * @description returns nullptr if key is not present
        */
        std::shared_ptr<BNode> find(T key);


        /**
        * @brief: returns the index of the first key that is greater or equal to key
        */
        int findKey(T key);

        /**
        * @brief: A wrapper function to remove the key key in subtree rooted with this node
        */
        void remove(T key);

        /**
        * @description: remove the key present in idx-th position in this node which is a leaf
        */
        void removeFromLeaf(int idx);

        /**
        * @description: remove the key present in idx-th position in this node which is a non-leaf
        */
        void removeFromNonLeaf(int idx);


        /**
        * @description: get the predecessor of the key- where the key
        * is present in the idx-th position in the node
        */
        T getPred(int idx);

        /**
        * @description: get the successor of the key- where the key
        * is present in the idx-th position in the node
        */
        T getSucc(int idx);


        /**
        * @description: fill up the child node present in the idx-th
        * position in the children[] array if that child has less than t-1 keys
        */
        void fill(int idx);

        /**
        * @description: borrow a key from the children[idx-1]-th node and place
        * it in children[idx]th node
        */
        void borrowFromPrev(int idx);

        /**
        * @description: borrow a key from the children[idx+1]-th node and place
        * it in children[idx]th node
        */
        void borrowFromNext(int idx);

        /**
        * @description: merge idx-th child of the node with (idx+1)th child of the node
        */
        void merge(int idx);

        /**
        * @description: A utility function to split the child `child` of this node. `index` is index of child in
        * child array children[].  The Child y must be full when this function is called
        */
        void splitChild(int index, std::shared_ptr<BNode> child);

    public:
        std::vector<T> keys; /**< stores keys in every BNode */
        std::vector<std::shared_ptr<BNode>> children; /**< stores children in every BNode */
        bool is_leaf; /**< true if this BNode is leaf */
        int min_degree; /**< Min degree of current BNode */
        int index; /**< index of current key in keys (-1 if it doesn't need) */
        std::shared_ptr<BNode> parent; /**< pointer to parent */
    };
};

#include "BTree.tpp"
