
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::InflictRangeDamage(class CEntity *,enum DamageType,float,class
   Vector<float,3> const &,float,float) */

void __thiscall
CEntity::InflictRangeDamage
          (CEntity *this,CEntity *param_1,DamageType param_2,float param_3,Vector<float,3> *param_4,
          float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  Vector<float,3> *pVVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  CDynamicContainer<class_CEntity> local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12d070  2284
                       ?InflictRangeDamage@CEntity@@QAEXPAV1@W4DamageType@@MABV?$Vector@M$02@@MM@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218baf;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_360ccb50((undefined4 *)local_1c);
  pVVar3 = param_4;
  local_34 = *(float *)param_4 - param_6;
  iVar6 = 0;
  local_28 = param_6 + *(float *)param_4;
  local_4 = 0;
  local_30 = *(float *)(param_4 + 4) - param_6;
  local_24 = param_6 + *(float *)(param_4 + 4);
  local_2c = *(float *)(param_4 + 8) - param_6;
  local_20 = param_6 + *(float *)(param_4 + 8);
  FindEntitiesInRange(this,(AABBox<float,3> *)&local_34,local_1c,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar4 = FUN_360caf20((int)local_1c);
  if (0 < iVar4) {
    do {
      piVar5 = (int *)FUN_360cafb0(local_1c,iVar6);
      iVar4 = piVar5[1];
      if (((((((iVar4 == 3) || (iVar4 == 5)) || (iVar4 == 9)) || (iVar4 == 10)) &&
           (iVar4 = FUN_36128840(pVVar3,(float *)&param_4,&local_34), iVar4 != 0)) ||
          ((piVar5[1] == 4 &&
           (iVar4 = FUN_36128d10(&local_34,(float *)pVVar3,(float *)&param_4), iVar4 != 0)))) &&
         ((float)param_4 <= param_6)) {
        fVar1 = param_3;
        if (param_5 <= (float)param_4) {
          fVar1 = ((param_6 - (float)param_4) * param_3) / (param_6 - param_5);
        }
        if (_DAT_3622376c < fVar1) {
          local_40 = local_34 - *(float *)pVVar3;
          local_3c = local_30 - *(float *)(pVVar3 + 4);
          local_38 = local_2c - *(float *)(pVVar3 + 8);
          fVar2 = SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38);
          local_4c = _DAT_3622376c;
          if ((float)_DAT_36223438 <= fVar2) {
            local_4c = _DAT_36223384 / fVar2;
          }
          local_44 = local_38 * local_4c;
          local_48 = local_3c * local_4c;
          local_4c = local_40 * local_4c;
          (**(code **)(*piVar5 + 0x130))(param_1,param_2,fVar1,&local_34,&local_4c);
        }
      }
      iVar6 = iVar6 + 1;
      iVar4 = FUN_360caf20((int)local_1c);
    } while (iVar6 < iVar4);
  }
  FUN_360cd280((int *)local_1c);
  ExceptionList = pvStack_c;
  return;
}

