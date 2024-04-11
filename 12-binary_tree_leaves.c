#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree.
 *@tree: a pointer to the root node of the tree to traverse.
 *Return: If tree is NULL, your function must return 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t s = 0;

	if (tree)
	{
		if (!tree->right && !tree->left)
			s += 1;
		s += binary_tree_leaves(tree->right);
		s += binary_tree_leaves(tree->left);
	}
	return (s);
}
