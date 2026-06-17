
undefined4 __cdecl FUN_361dc909(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = param_1[4];
  if (((iVar1 == 0xcd) || (iVar1 == 0xce)) && ((char)param_1[0x10] != '\0')) {
    (**(code **)(param_1[0x5f] + 4))(param_1);
    param_1[4] = 0xd0;
  }
  else if (iVar1 != 0xd0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x12;
    *(int *)(*param_1 + 0x18) = param_1[4];
    (**(code **)*param_1)(param_1);
  }
  while ((puVar2 = (undefined4 *)param_1[0x1f], (int)puVar2 <= param_1[0x21] &&
         (puVar2 = (undefined4 *)param_1[99], *(char *)((int)puVar2 + 0x11) == '\0'))) {
    iVar1 = (*(code *)*puVar2)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  param_1[4] = 0xcf;
  return CONCAT31((int3)((uint)puVar2 >> 8),1);
}

