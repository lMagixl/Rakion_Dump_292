
void __thiscall FUN_36030380(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  iVar7 = param_1 * 0x20;
  iVar8 = *(int *)((int)this + 0x1c) + iVar7;
  uVar3 = rdtsc();
  uVar9 = (uint)uVar3 - DAT_362be278;
  iVar4 = ((int)((ulonglong)uVar3 >> 0x20) - DAT_362be27c) - (uint)((uint)uVar3 < DAT_362be278);
  uVar2 = *(uint *)(iVar7 + 8 + *(int *)((int)this + 0x1c));
  uVar5 = DAT_362be260 - uVar2;
  bVar10 = uVar5 < DAT_362be270;
  uVar5 = uVar5 - DAT_362be270;
  iVar7 = ((DAT_362be264 - *(int *)(iVar7 + 0xc + *(int *)((int)this + 0x1c))) -
          (uint)(DAT_362be260 < uVar2)) - DAT_362be274;
  uVar2 = *(uint *)(iVar8 + 0x10);
  uVar6 = uVar5 + uVar9;
  *(uint *)(iVar8 + 0x10) = uVar2 + uVar6;
  *(int *)(iVar8 + 0x14) =
       *(int *)(iVar8 + 0x14) + (iVar7 - (uint)bVar10) + iVar4 + (uint)CARRY4(uVar5,uVar9) +
       (uint)CARRY4(uVar2,uVar6);
  piVar1 = (int *)((int)this + 0x30);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    uVar2 = *(uint *)((int)this + 0x28);
    uVar5 = uVar9 - *(uint *)((int)this + 0x20);
    *(uint *)((int)this + 0x28) = uVar2 + uVar5;
    *(uint *)((int)this + 0x2c) =
         *(int *)((int)this + 0x2c) +
         ((iVar4 - *(int *)((int)this + 0x24)) - (uint)(uVar9 < *(uint *)((int)this + 0x20))) +
         (uint)CARRY4(uVar2,uVar5);
  }
  bVar10 = CARRY4(DAT_362be278,DAT_362be268);
  DAT_362be278 = DAT_362be278 + DAT_362be268;
  DAT_362be27c = DAT_362be27c + DAT_362be26c + (uint)bVar10;
  return;
}

