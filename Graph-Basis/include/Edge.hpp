#ifndef MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_EDGE_H
#define MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_EDGE_H

#include "defines.hpp"

struct Edge
{
    Edge  *_next_edge;
    size_t _target_position;
    size_t _target_id;
    real   _weight;
};

#endif /* MODELAGEM_DE_REDES_COMPLEXAS_JOAO_VICTOR_EDGE_H */
