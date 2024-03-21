/*
 * File name: Graph.hpp
 * Author: João Víctor Costa de Oliveira
 * Creation date: 2023
 * Description: This file contains the basic structure for a simple Graph
 */

#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "Node.hpp"
#include "defines.hpp"
#include <fstream>

#define has_weight std::pair<bool, real>  // Um par de valores booleano (presença/true ou não/false) e real (peso da aresta)

class Graph
{
public:
    /*Assinatura dos métodos básicos para o funcionamento da classe*/

    Graph(std::ifstream& instance);
    Graph();
    ~Graph();

    void operator=(Graph *g2);
    void operator+(Graph *g2);
    void operator-(Graph *g2);
    void remove_node(size_t node_position);
    void remove_edge(size_t node_position_1, size_t node_position_2);
    void add_node(size_t node_position, size_t node_id, real weight);
    void add_edge(size_t node_position_1, size_t node_position_2, real weight = 0);
    void print_adjacency_matrix();
    void print_graph();
    void print_graph(std::ofstream& output_file);

    has_weight conected(size_t node_position_1, size_t node_position_2);
    has_weight conected(size_t node_position_1, size_t node_id_1, size_t node_id_2);

    /*Assinatura dos métodos para os algoritmos básicos*/
    /**
     * @brief Realiza a travessia em largura a partir de um nó específico.
     *
     * Esta função percorre o grafo a partir do nó especificado utilizando o algoritmo de busca em largura.
     * Ela escreve o caminho percorrido no arquivo de saída fornecido.
     *
     * @param node_position A posição do nó inicial no grafo.
     * @param output_file Referência para o fluxo de arquivo de saída para escrever o caminho percorrido.
     */
    void breadth_first_search(size_t node_position, std::ofstream& output_file);

    /**
     * @brief Realiza a travessia em profundidade a partir de um nó específico.
     *
     * Esta função percorre o grafo a partir do nó especificado utilizando o algoritmo de busca em profundidade.
     * Ela escreve o caminho percorrido no arquivo de saída fornecido.
     *
     * @param node_position A posição do nó inicial no grafo.
     * @param output_file Referência para o fluxo de arquivo de saída para escrever o caminho percorrido.
     */
    void depth_first_search(size_t node_position, std::ofstream& output_file);

    /**
     * @brief Aplica o algoritmo de Dijkstra para encontrar os caminhos mais curtos de um nó específico para todos os outros nós.
     *
     * Esta função aplica o algoritmo de Dijkstra a partir do nó especificado para encontrar os caminhos mais curtos
     * para todos os outros nós no grafo. Ela escreve os caminhos mais curtos no arquivo de saída fornecido.
     *
     * @param node_position A posição do nó inicial no grafo.
     * @param output_file Referência para o fluxo de arquivo de saída para escrever os caminhos mais curtos.
     */
    void dijkstra(size_t node_position, std::ofstream& output_file);

    /**
     * @brief Aplica o algoritmo de Bellman-Ford para encontrar os caminhos mais curtos de um nó específico para todos os outros nós.
     *
     * Esta função aplica o algoritmo de Bellman-Ford a partir do nó especificado para encontrar os caminhos mais curtos
     * para todos os outros nós no grafo. Ela escreve os caminhos mais curtos no arquivo de saída fornecido.
     *
     * @param node_position A posição do nó inicial no grafo.
     * @param output_file Referência para o fluxo de arquivo de saída para escrever os caminhos mais curtos.
     */
    void bellman_ford(size_t node_position, std::ofstream& output_file);

    /**
     * @brief Aplica o algoritmo de Floyd-Warshall para encontrar todos os caminhos mais curtos entre pares de nós no grafo.
     *
     * Esta função aplica o algoritmo de Floyd-Warshall para encontrar os caminhos mais curtos entre todos os pares de nós
     * no grafo. Ela escreve os caminhos mais curtos no arquivo de saída fornecido.
     *
     * @param output_file Referência para o fluxo de arquivo de saída para escrever os caminhos mais curtos.
     */
    void floyd_warshall(std::ofstream& output_file);

    /**
     * @brief Aplica o algoritmo de Prim para encontrar a árvore geradora mínima do grafo.
     *
     * Esta função aplica o algoritmo de Prim para encontrar a árvore geradora mínima do grafo.
     * Ela escreve as arestas da árvore geradora mínima no arquivo de saída fornecido.
     *
     * @param output_file Referência para o fluxo de arquivo de saída para escrever a árvore geradora mínima.
     */
    void prim(std::ofstream& output_file);

    /**
     * @brief Aplica o algoritmo de Kruskal para encontrar a árvore geradora mínima do grafo.
     *
     * Esta função aplica o algoritmo de Kruskal para encontrar a árvore geradora mínima do grafo.
     * Ela escreve as arestas da árvore geradora mínima no arquivo de saída fornecido.
     *
     * @param output_file Referência para o fluxo de arquivo de saída para escrever a árvore geradora mínima.
     */
    void kruskal(std::ofstream& output_file);

    /**
     * @brief Aplica o algoritmo de Ford-Fulkerson para encontrar o fluxo máximo em uma rede de fluxo.
     *
     * Esta função aplica o algoritmo de Ford-Fulkerson para encontrar o fluxo máximo de um nó de origem para um nó de destino
     * na rede de fluxo representada pelo grafo. Ela escreve o fluxo máximo e os caminhos de fluxo correspondentes
     * no arquivo de saída fornecido.
     *
     * @param source A posição do nó de origem no grafo.
     * @param target A posição do nó de destino no grafo.
     * @param output_file Referência para o fluxo de arquivo de saída para escrever o fluxo máximo e os caminhos de fluxo.
     */
    void ford_fulkerson(size_t source, size_t target, std::ofstream& output_file);

    /**
     * @brief Calcula o fecho transitivo direcionado do grafo.
     *
     * Esta função calcula o fecho transitivo direcionado do grafo e escreve o resultado
     * no arquivo de saída fornecido.
     *
     * @param output_file Referência para o fluxo de arquivo de saída para escrever o fecho transitivo.
     */
    void directed_transitive_closure(std::ofstream& output_file);

    /**
     * @brief Calcula o fecho transitivo não direcionado do grafo.
     *
     * Esta função calcula o fecho transitivo não direcionado do grafo e escreve o resultado
     * no arquivo de saída fornecido.
     *
     * @param output_file Referência para o fluxo de arquivo de saída para escrever o fecho transitivo.
     */
    void indirected_transitive_closure(std::ofstream& output_file);

    /**
     * @brief Calcula o coeficiente de agrupamento do grafo.
     *
     * Esta função calcula o coeficiente de agrupamento do grafo e escreve o resultado
     * no arquivo de saída fornecido.
     *
     * @param output_file Referência para o fluxo de arquivo de saída para escrever o coeficiente de agrupamento.
     */
    void cluster_coefficient(std::ofstream& output_file);

private:
    size_t                         _number_of_nodes;
    size_t                         _number_of_edges;
    bool                           _directed;
    bool                           _weighted_edges;
    bool                           _weighted_nodes;
    Node                          *_first;
    Node                          *_last;
    std::vector<std::vector<real>> _adjacency_matrix;

    void regenarate_adjacency_matrix();
};

#endif  //GRAPH_HPP
