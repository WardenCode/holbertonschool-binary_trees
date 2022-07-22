#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root = NULL;

	if (!tree || !(tree->right))
		return (NULL);

	new_root = tree->right;
	tree->parent = new_root;
	if (new_root->left)
	{
		tree->right = new_root->left;
		new_root->left->parent = tree;
	}
	else
		tree->right =  NULL;
	new_root->left = tree;
	new_root->parent = NULL;

	return (new_root);
}