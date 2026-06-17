
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEditModel::DrawWireSurface(class CDrawPort
   *,long,long,float,long,long,unsigned long,unsigned long) */

void __thiscall
CEditModel::DrawWireSurface
          (CEditModel *this,CDrawPort *param_1,long param_2,long param_3,float param_4,long param_5,
          long param_6,ulong param_7,ulong param_8)

{
  float fVar1;
  float fVar2;
  CEditModel *pCVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  CEditModel *pCVar8;
  CEditModel *pCVar9;
  ulonglong uVar10;
  CEditModel *pCVar11;
  CEditModel *pCVar12;
  ulong uVar13;
  ulong local_7c;
  ulong local_78;
  int local_74;
  int local_6c;
  
                    /* 0xaba00  1538  ?DrawWireSurface@CEditModel@@QAEXPAVCDrawPort@@JJMJJKK@Z */
  pCVar3 = this + param_2 * 0x60;
  local_6c = 0;
  if (0 < *(int *)(pCVar3 + 0xf0)) {
    local_74 = 0;
    pCVar8 = pCVar3;
    pCVar9 = pCVar3;
    do {
      puVar6 = (undefined4 *)(*(int *)(pCVar3 + 0x104) + local_74);
      if (*(int *)(*(int *)(pCVar3 + 0x104) + 0x10 + local_74) == param_3) {
        iVar4 = puVar6[1];
        fVar1 = (float)*(int *)(*(int *)(iVar4 + 0xc) + 0xc);
        fVar2 = (float)*(int *)(*(int *)(iVar4 + 0xc) + 0x10);
        if (_DAT_3622376c <=
            ((float)*(int *)(*(int *)(iVar4 + 0x14) + 0xc) - fVar1) *
            ((float)*(int *)(*(int *)(iVar4 + 4) + 0x10) - fVar2) -
            ((float)*(int *)(*(int *)(iVar4 + 4) + 0xc) - fVar1) *
            ((float)*(int *)(*(int *)(iVar4 + 0x14) + 0x10) - fVar2)) {
          local_78 = param_8;
          local_7c = 0xaaaaaaaa;
        }
        else {
          local_78 = param_7;
          local_7c = 0xffffffff;
        }
        iVar7 = 0;
        iVar4 = FUN_3600c1d0(puVar6);
        if (iVar4 != 1 && -1 < iVar4 + -1) {
          do {
            uVar10 = FUN_361bfd6c();
            pCVar8 = (CEditModel *)((int)uVar10 - param_5);
            uVar10 = FUN_361bfd6c();
            pCVar9 = (CEditModel *)((int)uVar10 - param_6);
            pCVar11 = pCVar8;
            pCVar12 = pCVar9;
            uVar5 = local_78 | 0xff;
            uVar13 = local_7c;
            uVar10 = FUN_361bfd6c();
            iVar4 = (int)uVar10 - param_6;
            uVar10 = FUN_361bfd6c();
            CDrawPort::DrawLine(param_1,(int)uVar10 - param_5,iVar4,(long)pCVar11,(long)pCVar12,
                                uVar5,uVar13);
            iVar7 = iVar7 + 1;
            iVar4 = FUN_3600c1d0(puVar6);
          } while (iVar7 < iVar4 + -1);
        }
        uVar5 = local_78 | 0xff;
        pCVar11 = pCVar8;
        pCVar12 = pCVar9;
        uVar10 = FUN_361bfd6c();
        iVar4 = (int)uVar10 - param_6;
        uVar10 = FUN_361bfd6c();
        CDrawPort::DrawLine(param_1,(int)uVar10 - param_5,iVar4,(long)pCVar11,(long)pCVar12,uVar5,
                            local_7c);
      }
      local_6c = local_6c + 1;
      local_74 = local_74 + 0x1c;
    } while (local_6c < *(int *)(pCVar3 + 0xf0));
  }
  return;
}

