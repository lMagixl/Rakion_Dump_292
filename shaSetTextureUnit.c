
/* void __cdecl shaSetTextureUnit(long) */

void __cdecl shaSetTextureUnit(long param_1)

{
                    /* 0x8e520  4395  ?shaSetTextureUnit@@YAXJ@Z */
  DAT_362c9858 = DAT_362c9858 | 1 << ((byte)param_1 & 0x1f);
  FUN_3607b900(param_1);
  return;
}

