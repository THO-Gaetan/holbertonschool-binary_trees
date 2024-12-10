#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: Size of the tree. If tree is NULL, return 0
 *
 * Description: The size of a binary tree is the number of nodes it contains,
 * including the root node and all descendants.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	n += binary_tree_size(tree->right);
	n += binary_tree_size(tree->left);
return (1 + n);
}
