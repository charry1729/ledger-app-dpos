//
// Created by andrea on 09/12/18.
//
#include "../../../../io.h"
#include "../signTx.h"
#ifndef PROJECT_REGISTERDELEGATETX_H
#define PROJECT_REGISTERDELEGATETX_H
void tx_init_regdel();

void tx_chunk_regdel(commPacket_t *packet, transaction_t *tx);

void tx_end_regdel(transaction_t *tx);
#endif //PROJECT_REGISTERDELEGATETX_H
