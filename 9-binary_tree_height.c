#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL)
		return (n);
	n++;
	n += binary_tree_height(tree->right);
	return (n);
}
