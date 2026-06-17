
/* struct GFXTexCoord * __cdecl shaGetUVMap(long) */

GFXTexCoord * __cdecl shaGetUVMap(long param_1)

{
                    /* 0x8e790  4353  ?shaGetUVMap@@YAPAUGFXTexCoord@@J@Z */
  if (DAT_362a4348 <= param_1) {
    return (GFXTexCoord *)0x0;
  }
  return *(GFXTexCoord **)(DAT_362c9818 + param_1 * 4);
}

