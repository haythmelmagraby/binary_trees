#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree.
 *@tree: a pointer to the root node of the tree to traverse.
 *Return: If tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 1, right = 1;

		if (tree->left)
			left = binary_tree_height(tree->left) + 1;
		if (tree->right)
			right = binary_tree_height(tree->right) + 1;
		if (right < left)
			return (left);
		else
			return (right);
	}
	return (0);
}

/**
 *binary_tree_balance - that measures the balance factor of a binary tree.
 *@tree: a pointer to the root node of the tree to traverse.
 *Return: If tree is NULL, your function must return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0);
}
