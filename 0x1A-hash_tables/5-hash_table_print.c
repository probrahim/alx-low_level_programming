#include "hash_tables.h"

/**
 * hash_table_print - print key/values
 * @ht: hash
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pint = 0;
	hash_node_t *node;
	char *vergule = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (pint < ht->size)
	{
		node = ((ht->array)[pint]);
		while (node)
		{
			printf("%s'%s': '%s'", vergule, node->key, node->value);
			vergule = ", ";
			node = node->next;
		}
		pint++;
	}
	puts("}");
}
