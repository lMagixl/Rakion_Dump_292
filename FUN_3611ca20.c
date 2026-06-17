
void __thiscall FUN_3611ca20(void *this,int *param_1,int param_2)

{
  CBrush3D *this_00;
  bool bVar1;
  int iVar2;
  uint uVar3;
  CBrushMip *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621862b;
  local_c = ExceptionList;
  this_00 = (CBrush3D *)param_1[0x1f];
  if ((((param_1[4] & 0x200000U) == 0) &&
      (ExceptionList = &local_c, iVar2 = CListNode::IsLinked((CListNode *)(this_00 + 4)), iVar2 == 0
      )) && ((DAT_362fcb9c != 0 ||
             ((((uVar3 = (**(code **)(*param_1 + 0x108))(), param_2 == 0 ||
                ((*(uint *)(param_2 + 0x50) & uVar3 & 0xffff0000) == 0)) &&
               ((*(uint *)((int)this + 0xd70) & uVar3 & 0xffff) == 0)) &&
              ((*(uint *)((int)this + 0xd74) == 0 ||
               ((*(uint *)((int)this + 0xd74) & uVar3 & 0xffff) != 0)))))))) {
    if (_bWorldEditorApp == 0) {
      if ((param_1[4] & 0x1000U) != 0) {
        ExceptionList = local_c;
        return;
      }
    }
    else {
      param_1[4] = param_1[4] & 0xffffefff;
    }
    if ((DAT_362fcbb8 == 0) && (DAT_362fcbb0 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((*(byte *)(param_1 + 4) & 2) == 0) && (!bVar1)) {
      pCVar4 = CBrush3D::GetFirstMip(this_00);
      iVar7 = 0;
      iVar2 = FUN_36043600((int)pCVar4);
      if (0 < iVar2) {
        do {
          iVar2 = FUN_36043710(pCVar4,iVar7);
          iVar6 = 0;
          if (0 < *(int *)(iVar2 + 0x18)) {
            iVar5 = *(int *)(iVar2 + 0x1c) + 200;
            do {
              if ((*(byte *)(iVar5 + 2) & 2) == 0) goto LAB_3611cb80;
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 0x1d0;
            } while (iVar6 < *(int *)(iVar2 + 0x18));
          }
          iVar7 = iVar7 + 1;
          iVar2 = FUN_36043600((int)pCVar4);
        } while (iVar7 < iVar2);
      }
      param_1[4] = param_1[4] | 0x1000;
      ExceptionList = local_c;
      return;
    }
LAB_3611cb80:
    FUN_3611bd10(this,*(float **)(this_00 + 0x668));
    fVar8 = (float10)(**(code **)(**(int **)(this_00 + 0x664) + 0x40))();
    fVar9 = CWorldRenderPrefs::GetCurrentMipBrushingFactor(&_wrpWorldRenderPrefs,(float)fVar8);
    pCVar4 = CBrush3D::GetBrushMipByDistance(this_00,fVar9);
    if (pCVar4 != (CBrushMip *)0x0) {
      if (_pselenSelectOnRender != (CSelection<class_CEntity,1> *)0x0) {
        FUN_36123d90(*(int **)((int)this + 0x694),(int)param_1);
      }
      iVar7 = 0;
      uStack_4 = 0;
      iVar2 = FUN_36043600((int)pCVar4);
      if (0 < iVar2) {
        do {
          iVar2 = FUN_36043710(pCVar4,iVar7);
          if (((*(byte *)(iVar2 + 0x44) & 2) == 0) || (*(int *)((int)this + 0xd40) != 0)) {
            iVar2 = FUN_36043710(pCVar4,iVar7);
            FUN_3611c7e0(this,iVar2);
          }
          iVar7 = iVar7 + 1;
          iVar2 = FUN_36043600((int)pCVar4);
        } while (iVar7 < iVar2);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

