
/* void __cdecl TR_CleanRender(class CTerrain *) */

void __cdecl TR_CleanRender(CTerrain *param_1)

{
                    /* 0x17dad0  3747  ?TR_CleanRender@@YAXPAVCTerrain@@@Z */
  shaClearTextureMatrix(0);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffe7f;
  if (((DAT_36300a58 != 0) && (param_1 == DAT_36300a5c)) &&
     (DAT_36301540 = 0, DAT_362a6c28 < *(int *)(_pGfx + 0xafc))) {
    DAT_36300a58 = 0;
    return;
  }
  DAT_36301540 = 0;
  return;
}

