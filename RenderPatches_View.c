
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private: void __thiscall CModelObject::RenderPatches_View(class CRenderModel &) */

void __thiscall CModelObject::RenderPatches_View(CModelObject *this,CRenderModel *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CTextureData *this_00;
  int iVar4;
  float fVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  CAnimObject *this_01;
  int *unaff_retaddr;
  float fVar9;
  float fVar10;
  float fStack_28;
  CModelObject *pCStack_8;
  
                    /* 0xc2890  3151  ?RenderPatches_View@CModelObject@@AAEXAAVCRenderModel@@@Z */
  (*DAT_362c4680)(0x52,0x52);
  (*DAT_362c464c)(0x2b);
  (*DAT_362c4648)(0x1b,0x1c);
  (*DAT_362c4628)();
  (*DAT_362c3e08)(0x1702);
  (*DAT_362c46a0)(DAT_362cbb60);
  iVar2 = *unaff_retaddr;
  iVar3 = unaff_retaddr[6];
  iVar8 = 0;
  fVar10 = 1.0;
  fVar9 = 1.0;
  if (*(int *)(this + 0x38) != 0) {
    lVar6 = GetWidth(this);
    fVar10 = (float)lVar6;
    lVar6 = GetHeight(this);
    fVar9 = (float)lVar6;
  }
  fStack_28 = 0.0;
  this_01 = (CAnimObject *)(iVar2 + 0xce4);
  do {
    this_00 = *(CTextureData **)(this_01 + 0x14);
    if (this_00 != (CTextureData *)0x0) {
      if ((*(uint *)(this + 0x18) & 1 << ((byte)iVar8 & 0x1f)) != 0) {
        iVar7 = FUN_3600bda0((undefined4 *)
                             (*(int *)(iVar3 * 0x60 + iVar2 + 0xe4) + 8 + (int)fStack_28));
        if (iVar7 == 0) goto LAB_360c2a6a;
        iVar8 = *(int *)(this_01 + 0x18);
        fVar5 = _DAT_36223384 / *(float *)(this_01 + 0x20);
        iVar4 = *(int *)(this_01 + 0x1c);
        iVar7 = *(int *)(this_00 + 0x20);
        iVar1 = *(int *)(this_00 + 0x24);
        lVar6 = CAnimObject::GetFrame(this_01);
        if (DAT_362cba70 == 0) {
          CTextureData::SetAsCurrent(this_00,lVar6,0);
        }
        else {
          (*DAT_362c4634)();
        }
        (*DAT_362c3e20)();
        (*DAT_362c3e40)((fVar5 / (float)iVar7) * fVar10,(fVar5 / (float)iVar1) * fVar9,0);
        iVar8 = -iVar8;
        (*DAT_362c3e48)((float)iVar8 * fStack_28,(float)-iVar4 * fVar10,0);
        (*DAT_362c469c)(DAT_362cbb50,0);
        this = pCStack_8;
      }
      fStack_28 = (float)((int)fStack_28 + 0x10);
    }
LAB_360c2a6a:
    iVar8 = iVar8 + 1;
    this_01 = this_01 + 0x28;
    if (0x1f < iVar8) {
      (*DAT_362c3e20)();
                    /* WARNING: Could not recover jumptable at 0x360c2a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_362c3e08)();
      return;
    }
  } while( true );
}

