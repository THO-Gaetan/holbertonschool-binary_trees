#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	n += binary_tree_size(tree->right);
	n += binary_tree_size(tree->left);
return (1 + n);
}
