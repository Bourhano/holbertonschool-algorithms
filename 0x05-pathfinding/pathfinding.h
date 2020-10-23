#ifndef PATHFINDING_H
#define PATHFINDING_H
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#include "queues.h"
#include "graphs.h"
#include <limits.h>
#include <string.h>
#define RIGHT        \
	{            \
	1, 0 \
		}
#define BOTTOM       \
	{            \
	0, 1 \
		}
#define LEFT          \
	{             \
	-1, 0 \
		}
#define TOP           \
	{             \
	0, -1 \
		}
#define Euclidean_dst(x1, y1, x2, y2) \
	(sqrt(pow((x2) - (x1), 2) + pow((y2) - (y1), 2)))
queue_t *backtracking_array(char **map, int rows, int cols,
			    point_t const *start, point_t const *target);
queue_t *backtracking_graph(graph_t *graph, vertex_t const *start,
			    vertex_t const *target);
queue_t *dijkstra_graph(graph_t *graph, vertex_t const *start,
			vertex_t const *target);
#endif
