
/* public: int __thiscall CEntity::GetBoneRelPosition(long,class Vector<float,3> &,class
   Vector<float,3> &) */

int __thiscall
CEntity::GetBoneRelPosition
          (CEntity *this,long param_1,Vector<float,3> *param_2,Vector<float,3> *param_3)

{
  int iVar1;
  
                    /* 0x125770  1734  ?GetBoneRelPosition@CEntity@@QAEHJAAV?$Vector@M$02@@0@Z */
  RM_SetBoneAdjustCallback(EntityAdjustBonesCallback,this);
  RM_SetBoneAdjustAbsCallback(EntityAdjustBonesAbsCallback,this);
  iVar1 = RM_GetBoneRelPosition(*(CModelInstance **)(this + 0x7c),param_1,param_2,param_3);
  return iVar1;
}

