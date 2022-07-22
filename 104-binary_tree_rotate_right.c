#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: A pointer to the new root node of the tree once rotated,
 * Otherwise, NULL
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp_root = NULL;

	if (!tree || !(tree->left))
		return (NULL);

	tmp_root = tree->left;
	tree->parent = tmp_root;
	if (tmp_root->right)
	{
		tree->left = tmp_root->right;
		tmp_root->right->parent = tree;
	}
	else
		tree->left =  NULL;
	tmp_root->right = tree;
	tmp_root->parent = NULL;

	return (tmp_root);
}
