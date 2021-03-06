
/*
 * Copyright (C) Xiaozhe Wang (chaoslawful)
 * Copyright (C) Yichun Zhang (agentzh)
 */


#ifndef _NGX_STREAM_LUA_TIME_H_INCLUDED_
#define _NGX_STREAM_LUA_TIME_H_INCLUDED_


#include "ngx_stream_lua_common.h"


void ngx_stream_lua_inject_time_api(lua_State *L);
void ngx_stream_lua_inject_req_time_api(lua_State *L);


#endif /* _NGX_STREAM_LUA_TIME_H_INCLUDED_ */
