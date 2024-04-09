#include "binary_trees.h"

/**
 *binary_tree_insert_right - creates a binary tree node
 *@parent: a pointer to the parent node of the node to create
 *@value: the value to put in the new node
 *
 *Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (!parent)
		return (NULL);

	bt = binary_tree_node(parent, value);

	if (bt == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		bt->right = parent->right;
		parent->right->parent = bt;
	}
	parent->right = bt;

	return (bt);
}
