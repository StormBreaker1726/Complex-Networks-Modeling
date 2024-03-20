//
// Created by joao-oliveira on 08/03/24.
//

#ifndef MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_NODE_H
#define MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_NODE_H

#include "defines.hpp"

struct Node
{
    size_t _number_of_edges;
    size_t _position;
    size_t _id;
    size_t _next_node_position;
    real   _weight;
};

#endif  //MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_NODE_H
