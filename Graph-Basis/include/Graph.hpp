/*
 * File name: Graph.hpp
 * Author: João Víctor Costa de Oliveira
 * Creation date: 2023
 * Description: This file contains the basic structure for a simple Graph
 */

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "defines.hpp"
#include <fstream>

class Graph
{
public:
    Graph(std::ifstream& instance);
    Graph();
    ~Graph();

    void operator=(Graph *g2);
    void operator+(Graph *g2);
    void remove_node(size_t node_position);
    void remove_edge(size_t node_position_1, size_t node_position_2);
    void add_node(size_t node_position, size_t node_id, size_t nodes_weight);
    void add_edge(size_t node_position_1, size_t node_position_2, size_t weight = 0);
    void print_adjacency_matrix();
    void print_graph();
    void print_graph(std::ofstream& output_file);

    bool conected(size_t node_position_1, size_t node_position_2);

private:
    size_t                           _number_of_nodes;
    size_t                           _number_of_edges;
    bool                             _directed;
    bool                             _weighted_edges;
    bool                             _weighted_nodes;
    std::vector<size_t>              _nodes_id;
    std::vector<size_t>              _nodes_weights;
    std::vector<std::vector<size_t>> _adjacency_matrix;

    void regenarate_adjacency_matrix();
};

#endif  //GRAPH_HPP
