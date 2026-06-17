
uint __thiscall FUN_3614a950(void *this,undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int *unaff_EBX;
  void *pvVar3;
  undefined4 *puVar4;
  
  pvVar1 = (void *)unaff_EBX[1];
  pvVar3 = pvVar1;
  if (this < pvVar1) {
    pvVar3 = this;
  }
  if (pvVar3 == (void *)0x0) {
    return 0;
  }
  unaff_EBX[1] = (int)pvVar1 - (int)pvVar3;
  if (*(int *)(unaff_EBX[7] + 0x18) == 1) {
    uVar2 = FUN_36149820(unaff_EBX[0xc],(byte *)*unaff_EBX,(uint)pvVar3);
  }
  else {
    if (*(int *)(unaff_EBX[7] + 0x18) != 2) goto LAB_3614a99b;
    uVar2 = FUN_3614a050(unaff_EBX[0xc],(uint *)*unaff_EBX,(uint)pvVar3);
  }
  unaff_EBX[0xc] = uVar2;
LAB_3614a99b:
  puVar4 = (undefined4 *)*unaff_EBX;
  for (uVar2 = (uint)pvVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_1 = *puVar4;
    puVar4 = puVar4 + 1;
    param_1 = param_1 + 1;
  }
  for (uVar2 = (uint)pvVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  unaff_EBX[2] = unaff_EBX[2] + (int)pvVar3;
  *unaff_EBX = *unaff_EBX + (int)pvVar3;
  return (uint)pvVar3;
}

