#include "graphs.h"

/**
 * free_edge - Frees an edge
 * @edge: the edge to free
 **/
void free_edge(edge_t *edge)
{
	if (edge == 0)
		return;
	free_edge(edge->next);
	free(edge->dest); /* might cause errors*/
	free(edge);
}

/**
 * free_vertex - Frees all edges on a vertex
 * @node: the vertex to free
 **/
void free_vertex(vertex_t *node)
{
	if (node == 0)
		return;
	free_vertex(node->next);
	/*free(node->next); keep this out for now*/
	free(node->edges); /* might cause errors*/
	free(node->content);
	free(node);
}

/**
 * graph_delete - Deletes the whole graph
 * @graph: pointer to the graph
 **/
void graph_delete(graph_t *graph)
{
	if (graph == 0)
		return;
	free_vertex(graph->vertices);
	free(graph->vertices);
	free(graph);
}
