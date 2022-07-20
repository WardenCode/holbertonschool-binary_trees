#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 *
 * @parent: pointer to the parent node
 *
 * @value: value assigned to the new node
 *
 * Return: A new node or NULL if fails.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;

	created_node = malloc(sizeof(binary_tree_t));
	if (!created_node)
		return (NULL);
	created_node->n = value;
	created_node->parent = parent;
	created_node->left = NULL;
	created_node->right = NULL;

	return (created_node);
}
