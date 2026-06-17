
/* void __cdecl TRE_FreeBufferForEditing(unsigned short *) */

void __cdecl TRE_FreeBufferForEditing(ushort *param_1)

{
                    /* 0x174ec0  3715  ?TRE_FreeBufferForEditing@@YAXPAG@Z */
  DAT_36300a54 = DAT_36300a54 + -1;
  FreeMemory(param_1);
  return;
}

