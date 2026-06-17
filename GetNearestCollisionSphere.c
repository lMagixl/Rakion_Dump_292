
/* public: struct CollisionSphere * __thiscall CModelInstance::GetNearestCollisionSphere(class
   Vector<float,3>) */

CollisionSphere * __thiscall
CModelInstance::GetNearestCollisionSphere
          (CModelInstance *this,float param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float local_2c;
  int local_28;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x15da10  2013
                       ?GetNearestCollisionSphere@CModelInstance@@QAEPAUCollisionSphere@@V?$Vector@M$02@@@Z
                        */
  local_2c = 666666.0;
  local_28 = -1;
  iVar4 = 1;
  iVar2 = FUN_360de540((undefined4 *)(this + 0x24));
  iVar3 = -1;
  if (1 < iVar2) {
    do {
      GetBonePositionAbs(this,(long)&local_c);
      fVar1 = SQRT((local_c - param_2) * (local_c - param_2) +
                   (local_8 - param_3) * (local_8 - param_3) +
                   (local_4 - param_4) * (local_4 - param_4));
      if (fVar1 < local_2c) {
        local_2c = fVar1;
        local_28 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar2 = FUN_360de540((undefined4 *)(this + 0x24));
      iVar3 = local_28;
    } while (iVar4 < iVar2);
  }
  return (CollisionSphere *)(*(int *)(this + 0x28) + iVar3 * 0xc);
}

