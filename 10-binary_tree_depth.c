#include "binary_trees.h"

/**
 *binary_tree_depth - measures  the depth of a node in a binary tree.
 *@tree: a pointer to the root node of the tree to traverse.
 *Return: If tree is NULL, your function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	else
		return (0);
}
