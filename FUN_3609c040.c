
void __cdecl FUN_3609c040(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_34 [7];
  undefined4 uStack_18;
  undefined4 uStack_c;
  
  puVar1 = in_EAX + 0x1f;
  if (in_EAX[0x1f] != 0) {
    do {
      iVar2 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
    } while (0 < iVar2);
    *puVar1 = 0;
    do {
      iVar2 = (**(code **)(*(int *)in_EAX[0x20] + 8))((int *)in_EAX[0x20]);
    } while (0 < iVar2);
    in_EAX[0x20] = 0;
  }
  puVar3 = local_34;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uStack_18 = 1;
  local_34[0] = param_1;
  local_34[1] = param_2;
  local_34[2] = *(undefined4 *)(_pGfx + 0xa60);
  local_34[3] = 1;
  uStack_c = 1;
  local_34[5] = 1;
  local_34[6] = *in_EAX;
  local_34[4] = 0;
  (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x34))(*(int **)(_pGfx + 0xa5c),local_34,puVar1);
  (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x68))
            (*(int **)(_pGfx + 0xa5c),param_1,param_2,*(undefined4 *)(_pGfx + 0xa64),0,in_EAX + 0x20
            );
  return;
}

