#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if binary tree node is leaf, meaning it has no
 * children
 * @node: Node to evaluate
 *
 * Return: 1 if 'node' is leaf, 0 if not, or if 'node' is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	else
		return (1);
}
