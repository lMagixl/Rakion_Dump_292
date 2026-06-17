
/* void __cdecl shaSetColor(long) */

void __cdecl shaSetColor(long param_1)

{
                    /* 0x8e4f0  4365  ?shaSetColor@@YAXJ@Z */
  if (DAT_362a434c <= param_1) {
    DAT_362c9834 = 0xffffffff;
    return;
  }
  DAT_362c9834 = *(undefined4 *)(DAT_362c9838 + param_1 * 4);
  return;
}

