
/* public: long __thiscall CModelInstance::GetNearestBoneID(class Vector<float,3>) */

long __thiscall
CModelInstance::GetNearestBoneID(CModelInstance *this,float param_2,float param_3,float param_4)

{
  long lVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_2c;
  long local_28;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x15d910  2012  ?GetNearestBoneID@CModelInstance@@QAEJV?$Vector@M$02@@@Z */
  local_2c = 666666.0;
  local_28 = -1;
  iVar5 = 1;
  iVar3 = FUN_3615fda0((int)(this + 0xc));
  if (iVar3 < 2) {
    return -1;
  }
  iVar3 = 0xe8;
  do {
    lVar1 = **(long **)(*(int *)(this + 0x10) + iVar3);
    GetBonePositionAbs(this,(long)&local_c);
    fVar2 = SQRT((local_c - param_2) * (local_c - param_2) +
                 (local_8 - param_3) * (local_8 - param_3) +
                 (local_4 - param_4) * (local_4 - param_4));
    if (fVar2 < local_2c) {
      local_2c = fVar2;
      local_28 = lVar1;
    }
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 0xe8;
    iVar4 = FUN_3615fda0((int)(this + 0xc));
  } while (iVar5 < iVar4);
  return local_28;
}

