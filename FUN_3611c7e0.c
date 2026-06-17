
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3611c7e0(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 auStack_5c [8];
  undefined1 local_54 [8];
  undefined1 auStack_4c [4];
  float local_48 [15];
  int iStack_c;
  
  iVar4 = CListNode::IsLinked((CListNode *)(param_1 + 0x84));
  if (iVar4 == 0) {
    CListHead::AddTail((CListHead *)((int)this + 0xe40),(CListNode *)(param_1 + 0x84));
    iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x14) + 0x668);
    if ((*(int *)(iVar4 + 4) == 8) && (DAT_362fcb90 == 0)) {
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x20;
      return;
    }
    if ((*(int *)((int)this + 0x6c0) == 0) || ((*(uint *)(iVar4 + 0x10) & 0x200) == 0)) {
      piVar7 = *(int **)((int)this + 0x694);
    }
    else {
      piVar7 = *(int **)((int)this + 0xd20);
    }
    iVar4 = *piVar7;
    puVar8 = local_54;
    uVar5 = FUN_3605cd80((void *)(param_1 + 0x54),local_48);
    (**(code **)(iVar4 + 0x18))(uVar5,puVar8);
    fVar1 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x54);
    fVar2 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x58);
    fVar3 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x5c);
    iVar4 = (**(code **)(*piVar7 + 0x28))
                      (auStack_5c,
                       SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3) * _DAT_36227cf0);
    if (iVar4 == 0) {
      FUN_360bf170(auStack_4c,(float *)(param_1 + 0x54),(float *)(piVar7 + 0x47),
                   (float *)(piVar7 + 0x3e));
      iVar4 = (**(code **)(*piVar7 + 0x2c))(auStack_4c);
    }
    if (iVar4 == -1) {
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 0x20;
      return;
    }
    if (iVar4 == 0) {
      uVar6 = *(uint *)(param_1 + 0x44) | 0x80;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x44) & 0xffffff7f;
    }
    *(uint *)(param_1 + 0x44) = uVar6;
    *(uint *)(param_1 + 0x44) = uVar6 & 0xffffffdf;
    *(int *)((int)this + 0xd90) = param_1;
    *(int *)((int)this + 0xd8c) = iStack_c;
    *(float *)(DAT_362bef74 + 0x34) = *(float *)(DAT_362bef74 + 0x34) + _DAT_36223384;
    if (*(int *)(iStack_c + 0x664) == iStack_c + 0x318) {
      FUN_36115210((int)this);
    }
    FUN_36117740((int)this);
    FUN_361143b0((int)this);
    if ((DAT_362fcbc0 != 0) || (*(int *)((int)this + 0xd40) != 0)) {
      FUN_36115460((int)this);
      FUN_3611bab0(this);
      if ((*(byte *)(param_1 + 0x44) & 0x80) != 0) {
        FUN_36118660(this,iStack_c + 0xc);
      }
      FUN_36114fb0((int)this);
      FUN_36117a90((int)this);
      FUN_36118260(this);
      FUN_3611c580(this);
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 0x14) + 0x668) != 0) {
      FUN_3611b010(this,param_1);
    }
  }
  return;
}

