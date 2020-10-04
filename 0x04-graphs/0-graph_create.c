#include "graphs.h"

/**
 * graph_create - Allocate memory to store a graph_t structure & initialize it
 * Return: pointer to the allocated structure, or NULL on failure
 **/
graph_t *graph_create(void)
{
	graph_t *graph;

	graph = malloc(sizeof(graph_t));
	if (!graph)
		return (NULL);
	graph->nb_vertices = 0;
	graph->vertices = 0;
	return (graph);
}
