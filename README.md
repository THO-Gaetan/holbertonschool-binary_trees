# Binary Trees Project 🌳

This project is a comprehensive implementation of binary trees in C, exploring various tree operations and algorithms.

## Description 📝

A binary tree is a hierarchical data structure composed of nodes, where each node contains a value and has up to two children (left and right). This project implements various operations on binary trees to understand their behavior and manipulation.

## Functions Implemented 🛠️

### Basic Operations
* `binary_tree_node` - Creates a new binary tree node 🆕
* `binary_tree_insert_left` - Inserts a node as the left-child ⬅️
* `binary_tree_insert_right` - Inserts a node as the right-child ➡️
* `binary_tree_delete` - Deletes an entire binary tree 🗑️

### Node Information
* `binary_tree_is_leaf` - Checks if a node is a leaf 🍃
* `binary_tree_is_root` - Checks if a node is a root 🌱
* `binary_tree_depth` - Measures the depth of a node 📏
* `binary_tree_size` - Measures the size of a binary tree 📊
* `binary_tree_leaves` - Counts the leaves in a binary tree 🍂
* `binary_tree_nodes` - Counts the nodes with at least 1 child 👨‍👦

### Tree Properties
* `binary_tree_balance` - Measures the balance factor of a binary tree ⚖️
* `binary_tree_is_full` - Checks if a binary tree is full 💯
* `binary_tree_is_perfect` - Checks if a binary tree is perfect ✨
* `binary_tree_height` - Measures the height of a binary tree 📐

### Tree Traversal
* `binary_tree_preorder` - Goes through a binary tree using pre-order traversal 1️⃣
* `binary_tree_inorder` - Goes through a binary tree using in-order traversal 2️⃣
* `binary_tree_postorder` - Goes through a binary tree using post-order traversal 3️⃣

### Node Relationships
* `binary_tree_sibling` - Finds the sibling of a node 👯
* `binary_tree_uncle` - Finds the uncle of a node 👨‍👨‍👦

## Data Structure Used 📚

```c
struct binary_tree_s
{
    int n;                        /* Node value */
    struct binary_tree_s *parent; /* Pointer to parent node */
    struct binary_tree_s *left;   /* Pointer to left child */
    struct binary_tree_s *right;  /* Pointer to right child */
};
```

## Compilation 🔨

All files are compiled using:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o binary_tree
```

## Authors ✍️
* LOUVEAU Clément [Github](https://github.com/valak74200)
