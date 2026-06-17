
/* WARNING: Removing unreachable block (ram,0x36078f62) */
/* WARNING: Removing unreachable block (ram,0x36078ee7) */
/* WARNING: Removing unreachable block (ram,0x36078e69) */
/* WARNING: Removing unreachable block (ram,0x36078def) */
/* WARNING: Removing unreachable block (ram,0x36078d76) */
/* WARNING: Removing unreachable block (ram,0x36078cfd) */
/* WARNING: Removing unreachable block (ram,0x36078c83) */
/* WARNING: Removing unreachable block (ram,0x36078c0b) */
/* WARNING: Removing unreachable block (ram,0x36078bd6) */
/* WARNING: Removing unreachable block (ram,0x36078be1) */
/* WARNING: Removing unreachable block (ram,0x36078b81) */
/* WARNING: Removing unreachable block (ram,0x36078b85) */
/* WARNING: Removing unreachable block (ram,0x36078bda) */
/* WARNING: Removing unreachable block (ram,0x36078c47) */
/* WARNING: Removing unreachable block (ram,0x36078cbf) */
/* WARNING: Removing unreachable block (ram,0x36078d39) */
/* WARNING: Removing unreachable block (ram,0x36078db4) */
/* WARNING: Removing unreachable block (ram,0x36078e2b) */
/* WARNING: Removing unreachable block (ram,0x36078ea8) */
/* WARNING: Removing unreachable block (ram,0x36078f24) */
/* WARNING: Removing unreachable block (ram,0x36078fa0) */
/* private: int __thiscall CGfxLibrary::SetupPixelFormat_OGL(struct HDC__ *,int) */

int __thiscall CGfxLibrary::SetupPixelFormat_OGL(CGfxLibrary *this,HDC__ *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 unaff_EBP;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  char *pcStack_8;
  char *pcStack_4;
  
                    /* 0x78a10  3630  ?SetupPixelFormat_OGL@CGfxLibrary@@AAEHPAUHDC__@@H@Z */
  pcStack_4 = (char *)0xffffffff;
  pcStack_8 = &LAB_36211ee2;
  local_c = ExceptionList;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_34 = 0x10028;
  local_30 = 0x25;
  if (DAT_362c53f8 < 0xc) {
    DAT_362c53f8 = 0;
  }
  else if (DAT_362c53f8 < 0x15) {
    DAT_362c53f8 = 0x10;
  }
  else {
    DAT_362c53f8 = (uint)(0x1b < DAT_362c53f8) * 8 + 0x18;
  }
  local_2c = (uint)(byte)(((*(int *)(this + 0xa44) == 1) - 1U & 0x10) + 0x10) << 8;
  ExceptionList = &local_c;
  iVar1 = FUN_36078980(param_1);
  if (iVar1 != 0) {
    iVar2 = (*DAT_362c4450)(param_1,iVar1,&local_34);
    if (iVar2 == 0) {
      FUN_36076840((char *)0x0,s_SetPixelFormat_3622a924);
    }
    else {
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      iVar1 = (*DAT_362c4458)(param_1,iVar1,0x28,&stack0xffffffc0);
      if (iVar1 != 0) {
        *(uint *)(this + 0xa54) = *(uint *)(this + 0xa54) | 1;
        if (pcStack_4 != (char *)0x0) {
          pcStack_4 = StringDuplicate(&DAT_36222fa0);
          local_10 = 0;
          CTString::operator=((CTString *)&pcStack_4,s_TYPE_RGBA_3622a934);
          pcStack_8 = StringDuplicate(&DAT_3622a958);
          local_10._0_1_ = 1;
          iVar1 = CTString::operator==((CTString *)&pcStack_8,&DAT_3622aa6f);
          if (iVar1 != 0) {
            CTString::operator=((CTString *)&pcStack_8,&DAT_3622aa70);
          }
          pcVar3 = Translate(s_ETRS_Pixel_Format_Description__3622aa78,4);
          CPrintF(pcVar3);
          pcVar3 = pcStack_4;
          pcVar7 = pcStack_4;
          pcVar4 = Translate(s_ETRS_Number___d___s__3622aa98,4);
          CPrintF(pcVar4,unaff_EBP,pcVar7);
          pcVar7 = pcStack_8;
          pcVar4 = Translate(s_ETRS_Flags___s_3622aab4,4);
          CPrintF(pcVar4,pcVar7);
          uVar5 = local_30 & 0xff;
          uVar8 = local_34 >> 0x10 & 0xff;
          uVar10 = local_34 & 0xff;
          uVar6 = 0;
          uVar9 = 0;
          pcVar7 = Translate(s_ETRS_Color_bits___d___d__d__d__d_3622aacc,4);
          CPrintF(pcVar7,uVar9,uVar6,uVar10,uVar8,uVar5);
          uVar8 = local_28 & 0xff;
          uVar5 = local_2c >> 0x18;
          pcVar7 = Translate(s_ETRS_Depth_bits___d___d_for_sten_3622aaf0,4);
          CPrintF(pcVar7,uVar5,uVar8);
          *(uint *)(this + 0xa4c) = local_2c >> 0x18;
          if ((char)local_28 == '\0') {
            uVar5 = *(uint *)(this + 0xa54) & 0xffffffbf;
          }
          else {
            uVar5 = *(uint *)(this + 0xa54) | 0x40;
          }
          *(uint *)(this + 0xa54) = uVar5;
          CPrintF(&DAT_3622ab18);
          local_10 = (uint)local_10._1_3_ << 8;
          StringFree(pcStack_8);
          local_10 = 0xffffffff;
          StringFree(pcVar3);
        }
        ExceptionList = local_18;
        return 1;
      }
    }
    ExceptionList = local_18;
    return 0;
  }
  FUN_36076840((char *)0x0,s_ChoosePixelFormat_3622a910);
  ExceptionList = local_c;
  return 0;
}

