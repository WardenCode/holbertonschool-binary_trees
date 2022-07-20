#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node
 *
 * @value: value assigned to the new node
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *created_node = NULL;

	if (!parent)
		return (NULL);

	created_node = binary_tree_node(parent, value);
	if (parent->right)
	{
		created_node->right = parent->right;
		parent->right->parent = created_node;
	}
	parent->right = created_node;

	return (created_node);
}
