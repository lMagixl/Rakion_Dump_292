
void __thiscall FUN_3611b0c0(void *this,int param_1,int param_2)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int local_8;
  
  iVar1 = *(int *)(param_2 + 0xe8);
  iVar4 = FUN_36120720((void *)((int)this + 0x74),param_2);
  if (iVar4 == 0) {
    FUN_361226a0((void *)((int)this + 0x74),param_2);
    this_00 = *(void **)(iVar1 + 0x1ac);
    local_8 = 0;
    if (0 < *(int *)(iVar1 + 4)) {
      do {
        piVar2 = *(int **)(*(int *)(iVar1 + 8) + local_8 * 8);
        iVar4 = *(int *)((int)this_00 + 0xbc);
        iVar3 = *(int *)(param_1 + 0xe0c);
        iVar5 = FUN_360d67e0(this_00,*piVar2);
        puVar7 = (undefined4 *)((iVar5 + iVar4) * 0x1c + iVar3);
        iVar5 = FUN_360d67e0(this_00,piVar2[1]);
        puVar6 = (undefined4 *)((iVar5 + iVar4) * 0x1c + iVar3);
        if (*(float *)((int)this + 0x1c) < (float)puVar7[2]) {
          *(undefined4 *)((int)this + 0x14) = *puVar7;
          *(undefined4 *)((int)this + 0x18) = puVar7[1];
          *(undefined4 *)((int)this + 0x1c) = puVar7[2];
        }
        if (*(float *)((int)this + 0x1c) < (float)puVar6[2]) {
          *(undefined4 *)((int)this + 0x14) = *puVar6;
          *(undefined4 *)((int)this + 0x18) = puVar6[1];
          *(undefined4 *)((int)this + 0x1c) = puVar6[2];
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(iVar1 + 4));
    }
  }
  return;
}

