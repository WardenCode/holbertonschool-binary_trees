#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 *
 * @first: Pointer to teh first node
 *
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *left_p = NULL, *right_p = NULL;
	binary_tree_t *holder = NULL;

	if (!first || !second)
		return (NULL);

	left_p = (binary_tree_t *)first;
	right_p = (binary_tree_t *)second;
	holder = (binary_tree_t *)second;

	if (first == second)
		return (left_p);

	for (; left_p; left_p = left_p->parent)
		for (right_p = holder; right_p; right_p = right_p->parent)
			if (left_p == right_p)
				return (left_p);
	return (NULL);
}
