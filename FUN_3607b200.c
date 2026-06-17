
undefined4 __cdecl FUN_3607b200(char *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_4 [4];
  
  piVar2 = (int *)thunk_FUN_36072d90(param_1);
  iVar1 = **(int **)(_pGfx + 0xa5c);
  uVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,local_4);
  (**(code **)(iVar1 + 0x15c))(*(undefined4 *)(_pGfx + 0xa5c));
  (**(code **)(*piVar2 + 8))(piVar2);
  return uVar3;
}

