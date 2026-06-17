
/* public: int __thiscall CEntity::GetBoneAbsPosition(long,class Vector<float,3> &,class
   Vector<float,3> &) */

int __thiscall
CEntity::GetBoneAbsPosition
          (CEntity *this,long param_1,Vector<float,3> *param_2,Vector<float,3> *param_3)

{
  int iVar1;
  
                    /* 0x1257b0  1725  ?GetBoneAbsPosition@CEntity@@QAEHJAAV?$Vector@M$02@@0@Z */
  RM_SetBoneAdjustCallback(EntityAdjustBonesCallback,this);
  RM_SetBoneAdjustAbsCallback(EntityAdjustBonesAbsCallback,this);
  iVar1 = RM_GetBoneAbsPosition(*(CModelInstance **)(this + 0x7c),param_1,param_2,param_3);
  return iVar1;
}

