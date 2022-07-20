#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: The size of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);

	return (height_left > height_right ? height_left : height_right);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: measures the balance factor of a binary tree or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	height_left = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	height_right = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (height_left - height_right);
}
