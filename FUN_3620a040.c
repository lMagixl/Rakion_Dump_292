
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_3620a040(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  void *_Memory;
  undefined4 *puVar3;
  size_t sVar4;
  undefined8 uVar5;
  
  _DAT_3638844c = param_1;
  DAT_36388460 = param_2;
  DAT_3638842c = param_3;
  uVar5 = FUN_3620a0d0(param_1);
  _Memory = (void *)((ulonglong)uVar5 >> 0x20);
  sVar4 = (size_t)uVar5;
  piVar1 = (int *)FUN_3620c7d0(&DAT_36388438,sVar4,_Memory);
  uVar2 = FUN_3620a1a0(DAT_36388460,piVar1);
  if (0 < (int)sVar4) {
    puVar3 = (undefined4 *)((int)_Memory + 4);
    do {
      free((void *)*puVar3);
      puVar3 = puVar3 + 2;
      sVar4 = sVar4 - 1;
    } while (sVar4 != 0);
  }
  free(_Memory);
  FUN_3620c8a0(piVar1);
  return uVar2;
}

