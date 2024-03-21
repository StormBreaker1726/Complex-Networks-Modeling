//
// Created by joao-oliveira on 08/03/24.
//

#ifndef MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_NODE_H
#define MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_NODE_H

#include "Edge.hpp"
#include "defines.hpp"

struct Node
{
    size_t _number_of_edges;
    size_t _position;
    size_t _id;
    real   _weight;
    Edge  *_first_edge;
    Edge  *_last_edge;
    Node  *_next_node;
    Node  *_previous_node;
};

#endif  //MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_NODE_H
