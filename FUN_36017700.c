
void __cdecl FUN_36017700(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *_Src;
  int iVar3;
  char *local_20;
  undefined4 *local_1c;
  undefined **local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e15b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = MEM_ReAlloc(DAT_363823ac,DAT_363823b0 * 4 + 4);
  if (pvVar1 == (void *)0x0) {
    local_20 = s_bad_allocation_36222d44;
    exception::exception((exception *)local_18,&local_20);
    local_18[0] = &PTR_FUN_36222fac;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_18,(ThrowInfo *)&DAT_3624e72c);
  }
  DAT_363823ac = pvVar1;
  local_1c = (undefined4 *)FUN_361bf99c(0xc);
  local_4 = 0;
  if (local_1c == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_3600b9a0(local_1c,param_1,param_2);
  }
  local_20 = (char *)((uint)local_20 & 0xffffff00);
  local_4 = 0xffffffff;
  local_1c = puVar2;
  _Src = (undefined4 *)
         FUN_36014670((int)DAT_363823ac,(int)((int)DAT_363823ac + DAT_363823b0 * 4),(int *)&local_1c
                     );
  iVar3 = (DAT_363823b0 * 4 - (int)_Src) + (int)DAT_363823ac >> 2;
  memmove((void *)((int)DAT_363823ac + (DAT_363823b0 - iVar3) * 4 + 4),_Src,iVar3 * 4);
  *_Src = puVar2;
  DAT_363823b0 = DAT_363823b0 + 1;
  _atexit((_func_4879 *)&LAB_361a9760);
  ExceptionList = local_c;
  return;
}

