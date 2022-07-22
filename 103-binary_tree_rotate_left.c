#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated.
 * Otherwise, NULL
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp_root = NULL;

	if (!tree || !(tree->right))
		return (NULL);

	tmp_root = tree->right;
	tree->parent = tmp_root;
	if (tmp_root->left)
	{
		tree->right = tmp_root->left;
		tmp_root->left->parent = tree;
	}
	else
		tree->right =  NULL;
	tmp_root->left = tree;
	tmp_root->parent = NULL;

	return (tmp_root);
}
