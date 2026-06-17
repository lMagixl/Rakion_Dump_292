
/* void __cdecl SE_PretouchIfNeeded(void) */

void __cdecl SE_PretouchIfNeeded(void)

{
  char *pcVar1;
  SIZE_T SVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  LPCVOID lpAddress;
  int iVar7;
  int local_38;
  char *local_34;
  int local_30;
  int local_2c;
  _MEMORY_BASIC_INFORMATION local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x8230  3187  ?SE_PretouchIfNeeded@@YAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620d344;
  local_c = ExceptionList;
  if ((DAT_362b8cfc != 0) && (DAT_362ccf18 != 0)) {
    DAT_362b8cfc = 0;
    ExceptionList = &local_c;
    pcVar1 = Translate(s_ETRSpretouching_36222c94,4);
    local_34 = StringDuplicate(pcVar1);
    local_4 = 0;
    SetProgressDescription((CTString *)&local_34);
    local_4 = 0xffffffff;
    StringFree(local_34);
    CallProgressHook_t(0.0);
    local_38 = 1;
    do {
      lpAddress = (LPCVOID)0x0;
      iVar6 = 0;
      local_34 = (char *)0x0;
      iVar7 = 0;
      SVar2 = VirtualQuery((LPCVOID)0x0,&local_28,0x1c);
      if (SVar2 != 0) {
        iVar6 = 0;
        do {
          if (((LPCVOID)0x7fff0000 < lpAddress) || (local_28.RegionSize == 0)) break;
          if ((local_28.State == 0x1000) && ((local_28.Protect == 4 && (local_28.Type == 0x20000))))
          {
            iVar7 = iVar7 + local_28.RegionSize;
            iVar6 = iVar6 + 1;
            local_30 = iVar7;
            if (local_38 != 1) {
              CallProgressHook_t((float)iVar7 / (float)local_2c);
              iVar3 = FUN_36008190(local_28.BaseAddress,local_28.RegionSize);
              if (iVar3 == 0) {
                local_34 = (char *)((int)local_34 + 1);
              }
            }
          }
          lpAddress = (LPCVOID)((int)local_28.BaseAddress + local_28.RegionSize);
          SVar2 = VirtualQuery(lpAddress,&local_28,0x1c);
        } while (SVar2 != 0);
      }
      uVar5 = iVar7 >> 0x1f;
      iVar3 = iVar7 + (uVar5 & 0x3ff);
      local_2c = iVar7;
      if (DAT_362b2ad0 < (int)((iVar3 >> 0x1f & 0x3ffU) + (iVar3 >> 10)) >> 10) {
        iVar6 = ((int)(iVar7 + (uVar5 & 0x3ff)) >> 10) + DAT_362b2ad0 * -0x400;
        pcVar1 = Translate(s_ETRSCannot_pretouch_due_to_lack_o_36222cd8,4);
        CPrintF(pcVar1,iVar6);
        goto LAB_360083f1;
      }
      local_38 = local_38 + 1;
    } while (local_38 < 3);
    iVar7 = (int)(iVar7 + (uVar5 & 0x3ff)) >> 10;
    pcVar1 = Translate(s_ETRSPretouched__d_KB_of_memory_i_36222ca4,4);
    CPrintF(pcVar1,iVar7,iVar6);
LAB_360083f1:
    if (1 < (int)local_34) {
      pcVar1 = local_34;
      pcVar4 = Translate(s_ETRS__d_blocks_were_skipped__36222d24,4);
      CPrintF(pcVar4,pcVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

