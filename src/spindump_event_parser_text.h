
//
//
//  ////////////////////////////////////////////////////////////////////////////////////
//  /////////                                                                ///////////
//  //////       SSS    PPPP    I   N    N   DDDD    U   U   M   M   PPPP         //////
//  //          S       P   P   I   NN   N   D   D   U   U   MM MM   P   P            //
//  /            SSS    PPPP    I   N NN N   D   D   U   U   M M M   PPPP              /
//  //              S   P       I   N   NN   D   D   U   U   M   M   P                //
//  ////         SSS    P       I   N    N   DDDD     UUU    M   M   P            //////
//  /////////                                                                ///////////
//  ////////////////////////////////////////////////////////////////////////////////////
//
//  SPINDUMP (C) 2018-2019 BY ERICSSON RESEARCH
//  AUTHOR: JARI ARKKO
//
// 

#ifndef SPINDUMP_EVENT_PARSER_TEXT_H
#define SPINDUMP_EVENT_PARSER_TEXT_H

//
// Includes -----------------------------------------------------------------------------------
//

#include <stdio.h>
#include "spindump_event.h"

//
// Data types ---------------------------------------------------------------------------------
//

//
// Parameters ---------------------------------------------------------------------------------
//

//
// Data structures ----------------------------------------------------------------------------
//

//
// External API interface to this module ------------------------------------------------------
//

int
spindump_event_parser_text_parse(const char* buffer,
				 size_t length,
				 struct spindump_event* event,
				 size_t* consumed);
int
spindump_event_parser_text_print(const struct spindump_event* event,
				 char* buffer,
				 size_t length,
				 size_t* consumed);

#endif // SPINDUMP_EVENT_PARSER_TEXT_H
