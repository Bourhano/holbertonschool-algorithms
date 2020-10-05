#include "graphs.h"
#include <string.h>

/**
 * graph_add_vertex - Add a vertex to the input graph
 * @graph: pointer to the graph
 * @str: content of the vertex
 *
 * Return: pointer to the added vertex, or NULL on failure
 **/
vertex_t *graph_add_vertex(graph_t *graph, const char *str)
{
	vertex_t *vertex, *node;
	int n, i, exists = 0;

	if (graph == 0)
		return (0);
	n = graph->nb_vertices;
	node = graph->vertices;
	if (node != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (strcmp((char *)str, node->content) == 0)
				exists = 1;
			if (node->next != 0)
				node = node->next;
		}
		if (exists)
		{
			/*free(node);*/
			return (0);
		}
	}
	vertex = malloc(sizeof(vertex_t));
	if (!vertex)
		return (0);
	if (n != 0)
		node->next = vertex;
	else
		graph->vertices = vertex;
	vertex->index = n;
	graph->nb_vertices = ++n;
	vertex->content = strdup(str);
	vertex->nb_edges = 0;
	vertex->edges = NULL;
	vertex->next = NULL;
	return (vertex);
}
