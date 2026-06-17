
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CEntity * __thiscall CEntity::TouchingEntity(int (__cdecl*)(class CEntity *),class
   CEntity *) */

CEntity * __thiscall
CEntity::TouchingEntity(CEntity *this,_func_int_CEntity_ptr *param_1,CEntity *param_2)

{
  CBrushMip *this_00;
  int iVar1;
  CRelationSrc *pCVar2;
  CRelationDst *pCVar3;
  undefined4 *puVar4;
  int *piVar5;
  CEntity *pCVar6;
  int iVar7;
  int *piVar8;
  
                    /* 0x1336f0  3842  ?TouchingEntity@CEntity@@QAEPAV1@P6AHPAV1@@Z0@Z */
  if (*(int *)(this + 4) != 8) {
    return (CEntity *)0x0;
  }
  _DAT_362fd54c = this;
  this_00 = CBrush3D::GetBrushMipByDistance(*(CBrush3D **)(this + 0x7c),0.0);
  DAT_362fd548 = 0;
  iVar1 = FUN_36043600((int)this_00);
  if (((iVar1 < 1) || (DAT_362fd548 = FUN_36043710(this_00,0), DAT_362fd548 == 0)) ||
     (iVar1 = FUN_36043600((int)this_00), 1 < iVar1)) {
    CPrintF(s_I_Field_doesn_t_have_exactly_one_3623866a + 2);
    return (CEntity *)0x0;
  }
  if ((param_2 != (CEntity *)0x0) && (iVar1 = FUN_361334e0(), iVar1 != 0)) {
    return param_2;
  }
  _DAT_362fd558 = 0;
  piVar5 = *(int **)(this + 0xac);
  param_2 = (CEntity *)0x0;
  do {
    if (*piVar5 == 0) {
      iVar7 = 0;
      iVar1 = FUN_360caf20(0x362fd550);
      if (0 < iVar1) {
        do {
          iVar1 = *(int *)(DAT_362fd554 + iVar7 * 4);
          *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xffffff7f;
          iVar7 = iVar7 + 1;
          iVar1 = FUN_360caf20(0x362fd550);
        } while (iVar7 < iVar1);
      }
      _DAT_362fd558 = 0;
      return param_2;
    }
    pCVar2 = CRelationLnk::GetSrc((CRelationLnk *)(piVar5 + -4));
    for (piVar8 = *(int **)pCVar2; pCVar6 = param_2, *piVar8 != 0; piVar8 = (int *)*piVar8) {
      pCVar3 = CRelationLnk::GetDst((CRelationLnk *)(piVar8 + -2));
      pCVar6 = (CEntity *)(pCVar3 + -0xac);
      if (((((*(uint *)(pCVar3 + -0xa4) & 0x200) != 0) &&
           ((*(int *)(pCVar3 + -0xa8) == 3 || (*(int *)(pCVar3 + -0xa8) == 5)))) &&
          (iVar1 = (*param_1)(pCVar6), iVar1 != 0)) && (((byte)pCVar3[-0x9c] & 0x80) == 0)) {
        iVar1 = FUN_361334e0();
        if (iVar1 != 0) break;
        puVar4 = (undefined4 *)FUN_360cc930((undefined4 *)&DAT_362fd550);
        *puVar4 = pCVar6;
        *(uint *)(pCVar3 + -0x9c) = *(uint *)(pCVar3 + -0x9c) | 0x80;
      }
    }
    param_2 = pCVar6;
    piVar5 = (int *)*piVar5;
  } while( true );
}

