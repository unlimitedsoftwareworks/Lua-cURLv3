#ifndef _LCMULTI_H_
#define _LCMULTI_H_

#include "lcurl.h"
#include "lcutils.h"

typedef struct lcurl_multi_tag{
  CURLM *curl;
  int err_mode;
  int h_ref;
}lcurl_multi_t;

int lcurl_multi_create(lua_State *L, int error_mode);

lcurl_multi_t *lcurl_getmulti_at(lua_State *L, int i);

#define lcurl_getmulti(L) lcurl_getmulti_at((L),1)

void lcurl_multi_initlib(lua_State *L, int nup);

#endif