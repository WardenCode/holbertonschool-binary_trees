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
	size_t h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		h_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		h_right = 1 + binary_tree_height(tree->right);

	return (h_left > h_right ? h_left : h_right);
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
	int h_left = 0, h_right = 0;

	if (!tree)
		return (0);

	h_left = (tree->left) ? (int)binary_tree_height(tree->left) : -1;
	h_right = (tree->right) ? (int)binary_tree_height(tree->right) : -1;

	return (h_left - h_right);
}

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: 1 if the binary tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if (tree->left && tree->right)
		return(binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	return (0);
}


/**
 * binary_tree_is_perfect - Function that checks if a binary tree is perfect
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: 1 if is perfect or 0 if is not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (!binary_tree_balance(tree) && binary_tree_is_full(tree));
}
