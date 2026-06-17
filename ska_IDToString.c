
/* class CTString __cdecl ska_IDToString(long) */

long __cdecl ska_IDToString(long param_1)

{
  char *pcVar1;
  int in_stack_00000008;
  
                    /* 0x1715b0  4414  ?ska_IDToString@@YA?AVCTString@@J@Z */
  if (in_stack_00000008 == -1) {
    pcVar1 = StringDuplicate(&DAT_3623ce0a);
    *(char **)param_1 = pcVar1;
    return param_1;
  }
  pcVar1 = StringDuplicate(*(char **)(DAT_36300860 + in_stack_00000008 * 4));
  *(char **)param_1 = pcVar1;
  return param_1;
}

