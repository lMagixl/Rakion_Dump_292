
/* public: void __thiscall CEntity::GetModelVerticesAbsolute(class CStaticStackArray<class
   Vector<float,3> > &,float,float) */

void __thiscall
CEntity::GetModelVerticesAbsolute
          (CEntity *this,CStaticStackArray<class_Vector<float,3>_> *param_1,float param_2,
          float param_3)

{
  CStaticStackArray<class_Vector<float,3>_> *unaff_retaddr;
  undefined1 local_3c [8];
  Vector<float,3> aVStack_34 [12];
  Matrix<float,3,3> aMStack_28 [40];
  
                    /* 0x126d80  1998
                       ?GetModelVerticesAbsolute@CEntity@@QAEXAAV?$CStaticStackArray@V?$Vector@M$02@@@@MM@Z
                        */
  (**(code **)(*(int *)this + 100))(local_3c);
  MakeRotationMatrixFast(aMStack_28,aVStack_34);
  if ((*(int *)(this + 4) != 3) && (*(int *)(this + 4) != 5)) {
    RM_SetBoneAdjustCallback(EntityAdjustBonesCallback,this);
    RM_SetBoneAdjustAbsCallback(EntityAdjustBonesAbsCallback,this);
    CModelInstance::GetModelVertices
              (*(CModelInstance **)(this + 0x7c),unaff_retaddr,aMStack_28,
               (Vector<float,3> *)&stack0xffffffc0,(float)param_1,param_2);
    return;
  }
  CModelObject::GetModelVertices
            (*(CModelObject **)(this + 0x7c),unaff_retaddr,aMStack_28,
             (Vector<float,3> *)&stack0xffffffc0,(float)param_1,param_2);
  return;
}

