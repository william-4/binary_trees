#include "binary_trees.h"

/**
 * check_full_recursion - checks if binary tree is full recursively
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if tree is not full, otherwise return 1
 */
int check_full_recursion(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    check_full_recursion(tree->left) == 0 ||
		    check_full_recursion(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is NULL or is not full, otherwise 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_full_recursion(tree));
}
