
void __thiscall FUN_36147f60(void *this,int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint *puVar7;
  undefined4 *puVar8;
  
  FUN_361473a0(this,param_1,param_2);
  if (*(uint **)(param_1 + 0x30) == (uint *)(param_1 + 0x1c)) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    puVar7 = *(uint **)((int)this + 0x30);
    for (iVar4 = *(int *)((int)this + 0x20) * *(int *)((int)this + 0x24); iVar4 != 0;
        iVar4 = iVar4 + -1) {
      *puVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      puVar7 = puVar7 + 1;
    }
  }
  else {
    puVar5 = *(undefined4 **)((int)this + 0x34);
    puVar8 = *(undefined4 **)((int)this + 0x30);
    for (iVar4 = *(int *)((int)this + 0x20) * *(int *)((int)this + 0x24); iVar4 != 0;
        iVar4 = iVar4 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  piVar2 = *(int **)(*(int *)this + 0x90);
  while (piVar6 = piVar2, piVar2 = (int *)*piVar6, piVar2 != (int *)0x0) {
    if (((byte)((CLightSource *)piVar6[5])[0x1c] & 0x80) != 0) {
      uVar3 = CLightSource::GetLightColor((CLightSource *)piVar6[5]);
      iVar4 = IsBlack(uVar3 & 0xffffff00);
      if (iVar4 == 0) {
        FUN_36147c90(this,(int)(piVar6 + -1),(byte *)0x0,0);
      }
    }
  }
  return;
}

