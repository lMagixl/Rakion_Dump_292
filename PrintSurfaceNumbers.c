
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CEditModel::PrintSurfaceNumbers(class CDrawPort *,class CFontData
   *,long,float,long,long,unsigned long) */

void __thiscall
CEditModel::PrintSurfaceNumbers
          (CEditModel *this,CDrawPort *param_1,CFontData *param_2,long param_3,float param_4,
          long param_5,long param_6,ulong param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  CEditModel *pCVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_158;
  int local_154;
  int local_150;
  int local_14c [3];
  char *local_140;
  CEditModel *local_13c;
  int local_138;
  int *local_134;
  float local_130;
  int local_12c;
  undefined4 *local_128;
  int local_124;
  int local_120;
  int *local_11c;
  int local_118;
  float local_114;
  char local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xacd90  2832
                       ?PrintSurfaceNumbers@CEditModel@@QAEXPAVCDrawPort@@PAVCFontData@@JMJJK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213877;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CDrawPort::FillZBuffer(param_1,1.0);
  pCVar11 = this + param_3 * 0x60 + 0xf0;
  local_138 = 0;
  local_13c = pCVar11;
  iVar3 = FUN_3600c0e0((undefined4 *)(pCVar11 + 0x20));
  if (0 < iVar3) {
    local_114 = (float)param_6;
    local_11c = &local_154;
    local_130 = (float)param_5;
    local_158 = 0;
    do {
      piVar2 = local_11c;
      iVar3 = *(int *)(pCVar11 + 0x24);
      iVar4 = 1;
      do {
        piVar2[iVar4] = 0x7fffffff;
        local_14c[iVar4] = -0x80000000;
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
      local_128 = (undefined4 *)(iVar3 + local_158 + 0x5c);
      local_154 = 0;
      iVar5 = FUN_3600bef0(local_128);
      iVar10 = local_150;
      iVar9 = local_14c[0];
      iVar4 = local_14c[1];
      iVar6 = local_14c[2];
      if (0 < iVar5) {
        local_118 = *(int *)(pCVar11 + 0x1c);
        local_134 = *(int **)(iVar3 + local_158 + 0x60);
        iVar3 = local_14c[1];
        iVar5 = local_14c[0];
        iVar12 = local_14c[2];
        do {
          iVar6 = *local_134 * 0x34 + local_118;
          iVar4 = *(int *)(iVar6 + 0xc);
          iVar6 = *(int *)(iVar6 + 0x10);
          if (iVar4 < iVar10) {
            iVar10 = iVar4;
          }
          if (iVar4 <= iVar3) {
            iVar4 = iVar3;
          }
          iVar9 = iVar6;
          if (iVar5 <= iVar6) {
            iVar9 = iVar5;
          }
          if (iVar6 <= iVar12) {
            iVar6 = iVar12;
          }
          local_154 = local_154 + 1;
          local_134 = local_134 + 1;
          iVar7 = FUN_3600bef0(local_128);
          iVar3 = iVar4;
          iVar5 = iVar9;
          iVar12 = iVar6;
        } while (local_154 < iVar7);
      }
      local_14c[2] = iVar6;
      local_14c[1] = iVar4;
      local_14c[0] = iVar9;
      local_150 = iVar10;
      local_120 = (local_14c[2] + local_14c[0]) / 2;
      local_124 = (local_14c[1] + local_150) / 2;
      uVar13 = FUN_361bfd6c();
      uVar14 = FUN_361bfd6c();
      iVar3 = local_138;
      sprintf(local_110,&DAT_362317a4,local_138);
      CDrawPort::SetFont(param_1,param_2);
      pcVar8 = local_110;
      local_12c = 0;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      local_140 = StringDuplicate(local_110);
      local_4 = 0;
      CDrawPort::PutText(param_1,(CTString *)&local_140,
                         (int)uVar14 + ((int)pcVar8 - (int)(local_110 + 1)) * -4,(int)uVar13 + -6,
                         0xffffffff,&local_12c);
      local_4 = 0xffffffff;
      StringFree(local_140);
      local_158 = local_158 + 0x70;
      local_138 = iVar3 + 1;
      iVar4 = FUN_3600c0e0((undefined4 *)(local_13c + 0x20));
      pCVar11 = local_13c;
    } while (iVar3 + 1 < iVar4);
  }
  ExceptionList = local_c;
  return;
}

