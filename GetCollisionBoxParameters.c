
/* public: virtual void __thiscall CEntity::GetCollisionBoxParameters(long,class AABBox<float,3>
   &,long &) */

void __thiscall
CEntity::GetCollisionBoxParameters
          (CEntity *this,long param_1,AABBox<float,3> *param_2,long *param_3)

{
  AABBox<float,3> *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  long lVar5;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x126540  1784
                       ?GetCollisionBoxParameters@CEntity@@UAEXJAAV?$AABBox@M$02@@AAJ@Z */
  if ((*(int *)(this + 4) != 9) && (*(int *)(this + 4) != 10)) {
    puVar3 = (undefined4 *)
             CModelObject::GetCollisionBoxMin(*(CModelObject **)(this + 0x7c),(long)&local_c);
    *(undefined4 *)param_2 = *puVar3;
    *(undefined4 *)(param_2 + 4) = puVar3[1];
    *(undefined4 *)(param_2 + 8) = puVar3[2];
    pfVar4 = (float *)CModelObject::GetCollisionBoxMax
                                (*(CModelObject **)(this + 0x7c),(long)&local_c);
    pAVar1 = param_2 + 0xc;
    *(float *)pAVar1 = *pfVar4;
    *(float *)(param_2 + 0x10) = pfVar4[1];
    *(float *)(param_2 + 0x14) = pfVar4[2];
    iVar2 = *(int *)(this + 0x7c);
    local_c = *(float *)(iVar2 + 0x84);
    local_8 = *(float *)(iVar2 + 0x88);
    local_4 = *(float *)(iVar2 + 0x8c);
    *(float *)pAVar1 = ABS(local_c) * *(float *)pAVar1;
    *(float *)param_2 = ABS(local_c) * *(float *)param_2;
    *(float *)(param_2 + 0x10) = ABS(local_8) * *(float *)(param_2 + 0x10);
    *(float *)(param_2 + 4) = ABS(local_8) * *(float *)(param_2 + 4);
    *(float *)(param_2 + 0x14) = ABS(local_4) * *(float *)(param_2 + 0x14);
    *(float *)(param_2 + 8) = ABS(local_4) * *(float *)(param_2 + 8);
    lVar5 = CModelObject::GetCollisionBoxDimensionEquality(*(CModelObject **)(this + 0x7c),param_1);
    *param_3 = lVar5;
    return;
  }
  puVar3 = (undefined4 *)
           CModelInstance::GetCollisionBoxMin(*(CModelInstance **)(this + 0x7c),(long)&local_c);
  *(undefined4 *)param_2 = *puVar3;
  *(undefined4 *)(param_2 + 4) = puVar3[1];
  *(undefined4 *)(param_2 + 8) = puVar3[2];
  pfVar4 = (float *)CModelInstance::GetCollisionBoxMax
                              (*(CModelInstance **)(this + 0x7c),(long)&local_c);
  pAVar1 = param_2 + 0xc;
  *(float *)pAVar1 = *pfVar4;
  *(float *)(param_2 + 0x10) = pfVar4[1];
  *(float *)(param_2 + 0x14) = pfVar4[2];
  iVar2 = *(int *)(this + 0x7c);
  local_c = *(float *)(iVar2 + 0x90);
  local_8 = *(float *)(iVar2 + 0x94);
  local_4 = *(float *)(iVar2 + 0x98);
  *(float *)pAVar1 = ABS(local_c) * *(float *)pAVar1;
  *(float *)param_2 = ABS(local_c) * *(float *)param_2;
  *(float *)(param_2 + 0x10) = ABS(local_8) * *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 4) = ABS(local_8) * *(float *)(param_2 + 4);
  *(float *)(param_2 + 0x14) = ABS(local_4) * *(float *)(param_2 + 0x14);
  *(float *)(param_2 + 8) = ABS(local_4) * *(float *)(param_2 + 8);
  lVar5 = CModelInstance::GetCollisionBoxDimensionEquality
                    (*(CModelInstance **)(this + 0x7c),param_1);
  *param_3 = lVar5;
  return;
}

