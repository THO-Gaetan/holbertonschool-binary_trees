#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree. If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL)
		return (n);
	n += binary_tree_height(tree->right);
	return (1 + n);
}
