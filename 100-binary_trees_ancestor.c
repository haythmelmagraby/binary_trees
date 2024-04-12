#include "binary_trees.h"

/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 *@first: a pointer to the first node.
 *@second: a pointer to the second node.
 *Return: If no common ancestor was found, your function must return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	binary_tree_t *m, *p;

	if (!second || !first)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	m = first->parent;
	p = second->parent;

	if (!m || first == p || (!m->parent && p))
		return (binary_trees_ancestor(first, p));
	else if (!p || m == second || (!p->parent && m))
		return (binary_trees_ancestor(m, second));
	return (binary_trees_ancestor(m, p));
}
