#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0;
	size_t hr = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hl = 1 + binary_tree_height(tree->left);

	if (tree->right)
		hr = 1 + binary_tree_height(tree->right);

	if (hl > hr)
		return (hl);
	else
		return (hr);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_size = 0;
	int right_size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_size = 1 + binary_tree_height(tree->left);

	if (tree->right)
		right_size = 1 + binary_tree_height(tree->right);

	return (left_size - right_size);
}
