
/* void __cdecl shaSetVertexArray(struct GFXVertex *,long,long) */

void __cdecl shaSetVertexArray(GFXVertex *param_1,long param_2,long param_3)

{
                    /* 0x8e240  4398  ?shaSetVertexArray@@YAXPAUGFXVertex@@JJ@Z */
  DAT_362a4338 = param_2;
  DAT_362c980c = param_1;
  DAT_362a433c = param_3;
  (*DAT_362c4690)(param_1 + param_2 * 0xc,param_3);
  return;
}

