
void __thiscall FUN_36117840(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float local_c;
  undefined4 *local_8;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((iVar1 != 0) &&
     (((*(uint *)(iVar1 + 200) & 0x40000000) == 0 ||
      (((*(uint *)(iVar1 + 200) & 0x100) != 0 && (DAT_362fcbf8 == 2)))))) {
    this_00 = *(void **)(iVar1 + 0x1ac);
    iVar8 = *(int *)((int)this_00 + 0xbc) * 0x1c + *(int *)((int)this + 0xe0c);
    iVar3 = FUN_3600bea0((undefined4 *)(iVar1 + 0xc));
    uVar4 = FUN_36061f20(0x362c3a74);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    iVar5 = FUN_36062560(&DAT_362c3a74,iVar3);
    iVar7 = 0;
    local_c = 1.2345679e+08;
    if (0 < iVar3) {
      local_8 = (undefined4 *)(iVar5 + 8);
      do {
        iVar5 = FUN_360d67e0(this_00,*(int *)(*(int *)(iVar1 + 0x10) + iVar7 * 4));
        fVar2 = -*(float *)(iVar5 * 0x1c + 8 + iVar8);
        puVar6 = (undefined4 *)(iVar5 * 0x1c + iVar8);
        if (fVar2 < local_c) {
          local_c = fVar2;
        }
        local_8[-2] = *puVar6;
        local_8[-1] = puVar6[1];
        *local_8 = puVar6[2];
        iVar7 = iVar7 + 1;
        local_8 = local_8 + 3;
      } while (iVar7 < iVar3);
    }
    fVar2 = -*(float *)(*(int *)**(undefined4 **)(param_1 + 0xe8) + 0x40);
    if (fVar2 <= local_c) {
      fVar2 = local_c;
    }
    *(float *)(param_1 + 0xe0) = fVar2;
    *(int *)(param_1 + 0x14) = iVar3;
    iVar3 = FUN_3600bef0((undefined4 *)(iVar1 + 0x14));
    *(int *)(param_1 + 0x1c) = iVar3;
    if (0 < iVar3) {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
    }
    *(float *)(DAT_362bef74 + 0xc) = (float)iVar3 + *(float *)(DAT_362bef74 + 0xc);
  }
  return;
}

