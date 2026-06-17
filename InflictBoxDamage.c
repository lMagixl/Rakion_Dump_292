
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::InflictBoxDamage(class CEntity *,enum DamageType,float,class
   AABBox<float,3> const &) */

void __thiscall
CEntity::InflictBoxDamage
          (CEntity *this,CEntity *param_1,DamageType param_2,float param_3,AABBox<float,3> *param_4)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [3];
  float local_28 [3];
  CDynamicContainer<class_CEntity> local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12d310  2282
                       ?InflictBoxDamage@CEntity@@QAEXPAV1@W4DamageType@@MABV?$AABBox@M$02@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218bc9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_360ccb50((undefined4 *)local_1c);
  iVar6 = 0;
  local_4 = 0;
  FindEntitiesInRange(this,param_4,local_1c,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar2 = FUN_360caf20((int)local_1c);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_360cafb0(local_1c,iVar6);
      if ((piVar3[0x21] != 0) && (_DAT_3622376c < param_3)) {
        pfVar4 = (float *)FUN_3605cd80(param_4,local_34);
        local_40 = *pfVar4 - (float)piVar3[0xf];
        local_3c = pfVar4[1] - (float)piVar3[0x10];
        local_38 = pfVar4[2] - (float)piVar3[0x11];
        fVar1 = SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38);
        local_4c = _DAT_3622376c;
        if ((float)_DAT_36223438 <= fVar1) {
          local_4c = _DAT_36223384 / fVar1;
        }
        local_44 = local_38 * local_4c;
        local_48 = local_3c * local_4c;
        local_4c = local_40 * local_4c;
        iVar2 = *piVar3;
        pfVar4 = &local_4c;
        uVar5 = FUN_3605cd80(param_4,local_28);
        (**(code **)(iVar2 + 0x130))(param_1,param_2,param_3,uVar5,pfVar4);
      }
      iVar6 = iVar6 + 1;
      iVar2 = FUN_360caf20((int)local_1c);
    } while (iVar6 < iVar2);
  }
  FUN_360cd280((int *)local_1c);
  ExceptionList = pvStack_c;
  return;
}

