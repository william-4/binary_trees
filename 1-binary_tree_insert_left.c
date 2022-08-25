#include "binary_trees.h"

/**
 * binary_tree_insert_left - pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node or NULL if parent is NULL/on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *left_node = NULL;
  binary_tree_t *temp = NULL;

  if (parent == NULL)
    return (NULL);

  left_node = malloc(sizeof(binary_tree_t));
  if (left_node == NULL)
    return (NULL);

  left_node->n = value;
  left_node->left = NULL;
  left_node->right = NULL;
  left_node->parent = parent;

  if (parent->left == NULL)
    parent->left = left_node;
  else
    {
      temp = parent->left;
      left_node->left = temp;
      temp->parent = left_node;
      parent->left = left_node;
    }
  return (left_node);
}
