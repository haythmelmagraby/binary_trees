#include "binary_trees.h"

/**
 *binary_tree_uncle - inds the uncle of a node.
 *@node: a pointer to the node to find the sibling.
 *Return: If node is NULL or the parent is NULL, return NULL,
 *If node has no sibling, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
