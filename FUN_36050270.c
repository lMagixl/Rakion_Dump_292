
undefined4 __cdecl
FUN_36050270(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 *param_4)

{
  size_t _NumOfElements;
  undefined4 *puVar1;
  size_t _SizeOfElements;
  _PtFuncCompare *_PtFuncCompare;
  undefined1 local_18 [16];
  undefined1 *local_8;
  undefined4 local_4;
  
  _PtFuncCompare = (_PtFuncCompare *)&LAB_360501b0;
  local_4 = param_3;
  _SizeOfElements = 4;
  local_8 = param_2;
  param_2 = local_18;
  _NumOfElements = FUN_36054450(param_1);
  puVar1 = bsearch(&param_2,(void *)param_1[1],_NumOfElements,_SizeOfElements,_PtFuncCompare);
  if (puVar1 != (undefined4 *)0x0) {
    *param_4 = *puVar1;
    return 1;
  }
  return 0;
}

