
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSimpleProjection3D_DOUBLE::ProjectAABBox(class AABBox<double,3> const
   &,class AABBox<double,3> &)const  */

void __thiscall
CSimpleProjection3D_DOUBLE::ProjectAABBox
          (CSimpleProjection3D_DOUBLE *this,AABBox<double,3> *param_1,AABBox<double,3> *param_2)

{
  double *pdVar1;
  int iVar2;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
                    /* 0x5d8f0  2850
                       ?ProjectAABBox@CSimpleProjection3D_DOUBLE@@QBEXABV?$AABBox@N$02@@AAV2@@Z */
  FUN_3605dda0(param_1,(undefined4 *)&local_38);
  pdVar1 = (double *)FUN_3605df30(param_1,&local_50);
  local_58 = _DAT_36227d98;
  if (_DAT_36227d98 < ABS(*pdVar1)) {
    local_58 = ABS(*pdVar1);
  }
  if (local_58 < ABS(pdVar1[1])) {
    local_58 = ABS(pdVar1[1]);
  }
  if (local_58 < ABS(pdVar1[2])) {
    local_58 = ABS(pdVar1[2]);
  }
  ProjectCoordinate(this,(Vector<double,3> *)&local_38,(Vector<double,3> *)&local_50);
  local_58 = local_58 + local_58;
  local_38 = local_50 - local_58;
  local_20 = local_50 + local_58;
  local_30 = local_48 - local_58;
  local_18 = local_48 + local_58;
  local_28 = local_40 - local_58;
  local_10 = local_40 + local_58;
  pdVar1 = &local_38;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_2 = *(undefined4 *)pdVar1;
    pdVar1 = (double *)((int)pdVar1 + 4);
    param_2 = param_2 + 4;
  }
  return;
}

