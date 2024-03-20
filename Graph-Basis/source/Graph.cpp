#include "../include/Graph.hpp"

Graph::Graph(std::ifstream& instance)
{
}

Graph::Graph()
{
}

Graph::~Graph()
{
}

void Graph::operator=(Graph *g2)
{
}

void Graph::operator+(Graph *g2)
{
}

void Graph::remove_node(size_t node_position)
{
}

void Graph::remove_edge(size_t node_position_1, size_t node_position_2)
{
}

void Graph::add_node(size_t node_position, size_t node_id, size_t nodes_weight)
{
}

void Graph::add_edge(size_t node_position_1, size_t node_position_2, size_t weight)
{
}

void Graph::print_adjacency_matrix()
{
}

void Graph::print_graph()
{
}

void Graph::print_graph(std::ofstream& output_file)
{
}

bool Graph::conected(size_t node_position_1, size_t node_position_2)
{
    return true;
}
