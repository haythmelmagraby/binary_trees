#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full.
 *@tree: a pointer to the root node of the tree to traverse.
 *Return: If tree is NULL, your function must return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		if ((!tree->left && tree->right) || (tree->left && !tree->right) || binary_tree_is_full(tree->right) == 0 || binary_tree_is_full(tree->left) == 0)
			return (0);
		return (1);
	}
	else
		return (0);
}
