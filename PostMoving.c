
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CMovableEntity::PostMoving(void) */

void __thiscall CMovableEntity::PostMoving(CMovableEntity *this)

{
  xEncryptMemory *pxVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_30;
  float local_2c;
  float local_28;
  
                    /* 0x1ae3b0  2787  ?PostMoving@CMovableEntity@@UAEXXZ */
  *(float *)(this + 0x234) = CTimer::TickQuantum + *(float *)(this + 0x234);
  if (*(int *)(this + 0x84) == 0) {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x10;
    return;
  }
  if ((*(uint *)(this + 8) & 0x10000) != 0) {
    *(uint *)(this + 8) = *(uint *)(this + 8) & 0xfffeffff;
    return;
  }
  if (*(int *)(this + 0x148) != 0) {
    FUN_3600dbc0(this + 0x15c,(int *)(this + 0x148));
  }
  uVar3 = *(uint *)(this + 0x254);
  uVar5 = 3;
  pfVar4 = &local_30;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar3,pfVar4,uVar5);
  local_64 = _DAT_36223384 / CTimer::TickQuantum;
  local_6c = *(float *)(this + 0x31c) * local_64;
  local_68 = *(float *)(this + 800) * local_64;
  local_64 = *(float *)(this + 0x324) * local_64;
  FUN_3612ef20(this + 0x250,&local_6c);
  uVar3 = *(uint *)(this + 0x254);
  uVar5 = 3;
  pfVar4 = &local_60;
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar3,pfVar4,uVar5);
  if (_DAT_362287b0 <
      ABS(local_60 * *(float *)(this + 0x180) +
          local_58 * *(float *)(this + 0x188) + local_5c * *(float *)(this + 0x184))) {
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(this + 0x234);
  }
  ClearNextPosition(this);
  *(float *)(this + 0x204) = local_30;
  *(float *)(this + 0x208) = local_2c;
  uVar5 = 3;
  pfVar4 = &local_30;
  *(float *)(this + 0x20c) = local_28;
  uVar3 = *(uint *)(this + 0x254);
  pxVar1 = Xenesis2::Foundation::Memory::theEncryptMemory();
  FUN_3600cdd0(pxVar1,uVar3,pfVar4,uVar5);
  if ((_DAT_362253e4 <= ABS(local_28) + ABS(local_2c) + ABS(local_30)) ||
     (((ABS(*(float *)(this + 0x128)) +
        ABS(*(float *)(this + 0x124)) + ABS(*(float *)(this + 0x120)) != _DAT_3622376c &&
       (*(float *)(this + 0x1b4) != _DAT_3622376c)) ||
      (ABS(*(float *)(this + 0x134)) + ABS(*(float *)(this + 0x130)) + ABS(*(float *)(this + 300))
       != _DAT_3622376c)))) goto LAB_361ae685;
  iVar2 = *(int *)(this + 0x148);
  if (iVar2 == 0) {
    if ((((*(uint *)(this + 8) & 3) == 0) || (*(float *)(this + 0x18c) == _DAT_3622376c)) ||
       ((char)(*(uint *)(this + 8) >> 8) < '\0')) goto LAB_361ae651;
  }
  else if (((*(uint *)(iVar2 + 8) & 0x200) == 0) ||
          (iVar2 = CListNode::IsLinked((CListNode *)(iVar2 + 0x2a0)), iVar2 == 0)) {
LAB_361ae651:
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 0x10;
  }
  if (((byte)this[0x10] & 0x10) != 0) {
    *(undefined4 *)(this + 0x288) = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x28c) = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x290) = *(undefined4 *)(this + 0x44);
    *(undefined4 *)(this + 0x294) = *(undefined4 *)(this + 0x48);
    *(undefined4 *)(this + 0x298) = *(undefined4 *)(this + 0x4c);
    *(undefined4 *)(this + 0x29c) = *(undefined4 *)(this + 0x50);
  }
LAB_361ae685:
  if (*(CLastPositions **)(this + 0xa4) != (CLastPositions *)0x0) {
    CLastPositions::AddPosition(*(CLastPositions **)(this + 0xa4),(Vector<float,3> *)(this + 700));
  }
  return;
}

