#include "graphs.h"
#include <string.h>
#include <stdio.h>
/**
 * graph_add_edge - Add an edge between two vertices
 * @graph: pointer to the graph
 * @src: string identifying the source node
 * @dest: string identifying the destination node
 * @type: the type of the edge (UNIDIRECTIONAL or BIDIRECTIONAL)
 *
 * Return: 1 on success, or 0 on failure
 **/
int graph_add_edge(graph_t *graph, const char *src, const char *dest,
		   edge_type_t type)
{
	vertex_t *node;
	edge_t *edge, *destnode, *aux;
	int n;

	if (graph == 0)
		return (0);
	if (type == BIDIRECTIONAL)
		return (graph_add_edge(graph, src, dest, 0) &&
			graph_add_edge(graph, dest, src, 0));
	n = graph->nb_vertices;
	if (n == 0)
		return (0);
	node = graph->vertices;
	while (strcmp(node->content, src) != 0 && node != 0)
		node = node->next;
	if (node == NULL)
		return (0);
	if (node->nb_edges != 0)
	{
		destnode = node->edges;
		while (strcmp(((vertex_t *)destnode)->content, dest) != 0
		       && destnode != 0)
		{
			aux = destnode;
			destnode = destnode->next;
		}
		if (destnode == 0)
			return (0);
	}
	edge = malloc(sizeof(edge_t));
	if (edge == 0)
		return (0);
	node->nb_edges += 1;
	if (node->nb_edges == 1)
		node->edges = edge;
	else
		aux->next = edge;
	edge->dest = (vertex_t *)destnode;
	edge->next = NULL;
	return (1);
}
