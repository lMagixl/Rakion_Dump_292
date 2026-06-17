
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelObject::RenderShadow(class CRenderModel &,class CPlacement3D const
   &,float,float,float,class Plane<float,3> const &) */

void __thiscall
CModelObject::RenderShadow
          (CModelObject *this,CRenderModel *param_1,CPlacement3D *param_2,float param_3,
          float param_4,float param_5,Plane<float,3> *param_6)

{
  int iVar1;
  int *piVar2;
  
                    /* 0xbcdd0  3152
                       ?RenderShadow@CModelObject@@QAEXAAVCRenderModel@@ABVCPlacement3D@@MMMABV?$Plane@M$02@@@Z
                        */
  iVar1 = HasShadow(this,*(long *)(param_1 + 0x18));
  if ((iVar1 != 0) && ((*(byte *)(*(int *)param_1 + 0x1260) & 9) == 0)) {
    *(float *)(DAT_362bef74 + 0x23c) = *(float *)(DAT_362bef74 + 0x23c) + _DAT_36223384;
    CRenderModel::SetModelView(param_1);
    RenderShadow_View(this,param_1,param_2,param_3,param_4,param_5,param_6);
    for (piVar2 = *(int **)(this + 0x9c); *piVar2 != 0; piVar2 = (int *)*piVar2) {
      if ((CRenderModel *)piVar2[0x34] != (CRenderModel *)0x0) {
        RenderShadow((CModelObject *)(piVar2 + 9),(CRenderModel *)piVar2[0x34],param_2,param_3,
                     param_4,param_5,param_6);
      }
    }
  }
  return;
}

