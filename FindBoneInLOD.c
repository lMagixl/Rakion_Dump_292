
/* public: long __thiscall CSkeleton::FindBoneInLOD(long,long)const  */

long __thiscall CSkeleton::FindBoneInLOD(CSkeleton *this,long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x170c90  1629  ?FindBoneInLOD@CSkeleton@@QBEJJJ@Z */
  if (-1 < param_2) {
    iVar1 = FUN_3600c5c0((undefined4 *)(this + 0x14));
    if (param_2 < iVar1) {
      uVar2 = FUN_36170930(*(int *)(this + 0x18) + param_2 * 0x18,param_1);
      return uVar2;
    }
  }
  return -1;
}

