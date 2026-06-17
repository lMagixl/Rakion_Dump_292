
/* void __cdecl shaSetTextureWrapping(enum GfxWrap,enum GfxWrap,long) */

void __cdecl shaSetTextureWrapping(GfxWrap param_1,GfxWrap param_2,long param_3)

{
                    /* 0x8e900  4396  ?shaSetTextureWrapping@@YAXW4GfxWrap@@0J@Z */
  if (param_3 != -1) {
    shaSetTextureUnit(param_3);
  }
  (*DAT_362c4680)(param_1,param_2);
  return;
}

