
/* public: void __thiscall CBrushArchive::CacheAllShadowmaps(void) */

void __thiscall CBrushArchive::CacheAllShadowmaps(CBrushArchive *this)

{
  CBrushArchive *this_00;
  int *this_01;
  CShadowMap *this_02;
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  CBrushArchive *this_03;
  int iVar5;
  int *piVar6;
  int local_30;
  int local_28;
  CBrushArchive *local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1362c0  1117  ?CacheAllShadowmaps@CBrushArchive@@QAEXXZ */
  puStack_c = &LAB_362192cc;
  local_10 = ExceptionList;
  this_00 = this + 0x14;
  local_14 = &stack0xffffffbc;
  local_1c = 0;
  local_30 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_20 = this_00;
  iVar1 = FUN_360cb6c0((int)this_00);
  this_03 = this_00;
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb850(this_00,local_30);
      if (*(int *)(iVar1 + 0x668) != 0) {
        iVar1 = FUN_360cb850(this_00,local_30);
        for (piVar6 = *(int **)(iVar1 + 0x674); local_18 = piVar6, *piVar6 != 0;
            piVar6 = (int *)*piVar6) {
          this_01 = piVar6 + -6;
          iVar4 = 0;
          iVar1 = FUN_36043600((int)this_01);
          if (0 < iVar1) {
            do {
              iVar1 = FUN_36043710(this_01,iVar4);
              iVar5 = 0;
              local_8 = CONCAT31(local_8._1_3_,2);
              if (0 < *(int *)(iVar1 + 0x18)) {
                do {
                  iVar2 = CListHead::IsEmpty((CListHead *)
                                             (iVar5 * 0x1d0 + 0x160 + *(int *)(iVar1 + 0x1c)));
                  if (iVar2 == 0) {
                    local_1c = local_1c + 1;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)(iVar1 + 0x18));
              }
              iVar4 = iVar4 + 1;
              iVar1 = FUN_36043600((int)this_01);
              piVar6 = local_18;
            } while (iVar4 < iVar1);
          }
        }
      }
      local_30 = local_30 + 1;
      iVar1 = FUN_360cb6c0((int)this_00);
      this_03 = local_20;
    } while (local_30 < iVar1);
  }
  local_8 = 3;
  pcVar3 = Translate(s_I_ETRScaching_shadowmaps_36238826 + 2,4);
  local_20 = (CBrushArchive *)StringDuplicate(pcVar3);
  local_8._0_1_ = 4;
  SetProgressDescription((CTString *)&local_20);
  local_8._0_1_ = 3;
  StringFree((char *)local_20);
  CallProgressHook_t(0.0);
  local_18 = (int *)0x0;
  local_8._0_1_ = 5;
  for (local_30 = 0; iVar1 = FUN_360cb6c0((int)this_03), local_30 < iVar1; local_30 = local_30 + 1)
  {
    iVar1 = FUN_360cb850(this_03,local_30);
    if (*(int *)(iVar1 + 0x668) != 0) {
      iVar1 = FUN_360cb850(this_03,local_30);
      local_20 = *(CBrushArchive **)(iVar1 + 0x674);
      while (*(int *)local_20 != 0) {
        piVar6 = (int *)((int)local_20 + -0x18);
        for (local_28 = 0; iVar1 = FUN_36043600((int)piVar6), local_28 < iVar1;
            local_28 = local_28 + 1) {
          iVar1 = FUN_36043710(piVar6,local_28);
          local_8._0_1_ = 7;
          for (iVar4 = 0; iVar4 < *(int *)(iVar1 + 0x18); iVar4 = iVar4 + 1) {
            this_02 = (CShadowMap *)(*(int *)(iVar1 + 0x1c) + 0xd0 + iVar4 * 0x1d0);
            iVar5 = CListHead::IsEmpty((CListHead *)(this_02 + 0x90));
            if (iVar5 == 0) {
              (**(code **)(*(int *)this_02 + 4))();
              CShadowMap::Prepare(this_02);
              CShadowMap::SetAsCurrent(this_02);
              local_18 = (int *)((int)local_18 + 1);
              CallProgressHook_t((float)(int)local_18 / (float)local_1c);
            }
          }
        }
        local_20 = *(CBrushArchive **)local_20;
        local_8._0_1_ = 5;
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  CallProgressHook_t(1.0);
  ExceptionList = local_10;
  return;
}

