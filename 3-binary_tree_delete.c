#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
	free(tree->right);
	free(tree->left);
	free(tree->parent);
	free(tree);
}