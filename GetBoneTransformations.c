
/* public: int __thiscall CEntity::GetBoneTransformations(long,class Matrix<float,3,3> &,class
   Vector<float,3> &) */

int __thiscall
CEntity::GetBoneTransformations
          (CEntity *this,long param_1,Matrix<float,3,3> *param_2,Vector<float,3> *param_3)

{
  int iVar1;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x126e20  1735
                       ?GetBoneTransformations@CEntity@@QAEHJAAV?$Matrix@M$02$02@@AAV?$Vector@M$02@@@Z
                        */
  RM_SetBoneAdjustCallback(EntityAdjustBonesCallback,this);
  RM_SetBoneAdjustAbsCallback(EntityAdjustBonesAbsCallback,this);
  iVar1 = RM_GetBoneTransformations(*(CModelInstance **)(this + 0x7c),param_1,&local_30);
  if (iVar1 != 0) {
    *(float *)param_2 = local_30;
    *(undefined4 *)(param_2 + 4) = local_2c;
    *(undefined4 *)(param_2 + 8) = local_28;
    *(undefined4 *)param_3 = local_24;
    *(undefined4 *)(param_2 + 0xc) = local_20;
    *(undefined4 *)(param_2 + 0x10) = local_1c;
    *(undefined4 *)(param_2 + 0x14) = local_18;
    *(undefined4 *)(param_3 + 4) = local_14;
    *(undefined4 *)(param_2 + 0x18) = local_10;
    *(undefined4 *)(param_2 + 0x1c) = local_c;
    *(undefined4 *)(param_2 + 0x20) = local_8;
    *(undefined4 *)(param_3 + 8) = local_4;
    return 1;
  }
  return 0;
}

