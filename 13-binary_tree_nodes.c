#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Return: Number of nodes with at least 1 child in the tree
 *         If tree is NULL, return 0
 *
 * Description: A node is considered to have at least one child if it has
 *              a left child, a right child, or both.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (n);
	n += binary_tree_nodes(tree->left);
	n += binary_tree_nodes(tree->right);
	return (1 + n);
}
