
/* public: struct ModelPolygon * __thiscall CModelObject::PolygonHit(class CPlacement3D,class
   CPlacement3D,long,float &) */

ModelPolygon * __thiscall
CModelObject::PolygonHit
          (CModelObject *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
          undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
          undefined4 param_13,undefined4 param_14,float *param_15)

{
  undefined4 uVar1;
  float *pfVar2;
  ModelPolygon *pMVar3;
  int *piVar4;
  ModelPolygon *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar2 = param_15;
                    /* 0xb8c30  2776
                       ?PolygonHit@CModelObject@@QAEPAUModelPolygon@@VCPlacement3D@@0JAAM@Z */
  uVar1 = param_14;
  *param_15 = 100000.0;
  piVar4 = *(int **)(this + 0x9c);
  local_1c = (ModelPolygon *)0x0;
  for (; *piVar4 != 0; piVar4 = (int *)*piVar4) {
    GetAttachmentPlacement(this,(CAttachmentModelObject *)&local_18);
    CPlacement3D::RelativeToAbsolute((CPlacement3D *)&local_18,(CPlacement3D *)&param_8);
    pMVar3 = PolygonHit((CModelObject *)(piVar4 + 9),param_2,param_3,param_4,param_5,param_6,param_7
                        ,local_18,local_14,local_10,local_c,local_8,local_4,uVar1,&param_15);
    if ((float)param_15 < *pfVar2) {
      *pfVar2 = (float)param_15;
      local_1c = pMVar3;
    }
  }
  GetData(this);
  pMVar3 = PolygonHitModelData();
  if ((float)param_15 < *pfVar2) {
    *pfVar2 = (float)param_15;
    return pMVar3;
  }
  return local_1c;
}

