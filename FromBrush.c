
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCollisionInfo::FromBrush(class CBrush3D *) */

void __thiscall CCollisionInfo::FromBrush(CCollisionInfo *this,CBrush3D *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  CBrushMip *this_00;
  int *piVar3;
  undefined4 *puVar4;
  double *pdVar5;
  int local_60;
  float local_54 [2];
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
  float local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x12a8d0  1680  ?FromBrush@CCollisionInfo@@QAEXPAVCBrush3D@@@Z */
  local_c = 0xffffffff;
  puStack_10 = &LAB_36218a43;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (*(int *)this != 0) {
    ExceptionList = &local_14;
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  *(undefined4 *)this = 1;
  iVar2 = thunk_FUN_361bf99c(0x80);
  local_c = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    FUN_36006680(iVar2,0x40,2,CMovingSphere::CMovingSphere);
  }
  local_c = 0xffffffff;
  *(int *)(this + 4) = iVar2;
  *(undefined4 *)(this + 0x30) = 8;
  local_48 = 3e+38;
  local_3c = -3e+38;
  local_44 = 3e+38;
  local_38 = -3e+38;
  local_40 = 3e+38;
  local_34 = -3e+38;
  this_00 = CBrush3D::GetFirstMip(param_1);
  local_60 = 0;
  iVar2 = FUN_36043600((int)this_00);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_36043710(this_00,local_60);
      iVar2 = *piVar3;
      if (0 < iVar2) {
        pdVar5 = (double *)(piVar3[1] + 0x30);
        do {
          local_30 = (float)pdVar5[-2];
          local_2c = (float)pdVar5[-1];
          local_4c = (float)*pdVar5;
          local_28 = local_4c;
          local_24 = local_30;
          local_20 = local_2c;
          local_1c = local_4c;
          FUN_360b1850(&local_48,&local_30);
          pdVar5 = pdVar5 + 9;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_60 = local_60 + 1;
      iVar2 = FUN_36043600((int)this_00);
    } while (local_60 < iVar2);
  }
  puVar1 = *(undefined4 **)(this + 4);
  puVar4 = (undefined4 *)FUN_3605cd80(&local_48,local_54);
  *puVar1 = *puVar4;
  puVar1[1] = puVar4[1];
  puVar1[2] = puVar4[2];
  *(float *)(*(int *)(this + 4) + 0xc) =
       SQRT((local_3c - local_48) * (local_3c - local_48) +
            (local_38 - local_44) * (local_38 - local_44) +
            (local_34 - local_40) * (local_34 - local_40)) * _DAT_36227cf0;
  *(undefined4 *)(this + 8) = 0x7f61b1e6;
  *(undefined4 *)(this + 0xc) = 0xff61b1e6;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0x3f800000;
  ExceptionList = local_14;
  return;
}

