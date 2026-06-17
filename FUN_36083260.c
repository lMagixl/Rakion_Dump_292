
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_36083260(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int local_24;
  undefined4 local_1c;
  CDisableAsyncProgress local_18 [4];
  int *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211f8e;
  local_c = ExceptionList;
  iVar6 = *(int *)(_pGfx + 0xa38);
  ExceptionList = &local_c;
  CDisableAsyncProgress::CDisableAsyncProgress(local_18);
  local_4 = 0;
  if (param_3 == 0xffffffff) {
    param_3 = param_2 >> 2 & 1;
  }
  iVar4 = 1;
  if (1 < (int)param_3) {
    do {
      param_2 = param_2 | 0x10 << ((byte)iVar4 & 0x1f);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_3);
  }
  uVar1 = FUN_360840c0(0x362c4710);
  uVar7 = 1;
  param_3 = 1;
  if (1 < (int)uVar1) {
    piVar5 = (int *)(DAT_362c4714 + 0x19c);
    do {
      param_3 = uVar7;
      if (*piVar5 == 0) break;
      uVar7 = uVar7 + 1;
      piVar5 = piVar5 + 0x35;
      param_3 = uVar7;
    } while ((int)uVar7 < (int)uVar1);
  }
  if (param_3 == uVar1) {
    iVar9 = DAT_362c4718 + 1;
    DAT_362c4718 = iVar9;
    iVar4 = FUN_36084140((undefined4 *)&DAT_362c4710);
    if (iVar4 < iVar9) {
      iVar4 = FUN_36084140((undefined4 *)&DAT_362c4710);
      FUN_36084310(&DAT_362c4710,iVar4 + _DAT_362c471c);
    }
  }
  iVar4 = param_3 * 0xd4 + DAT_362c4714;
  local_24 = 0;
  if (iVar6 == 0) {
    iVar6 = 0;
    puVar8 = (undefined4 *)(iVar4 + 0x30);
    do {
      puVar8[0xc] = 0;
      *puVar8 = 0;
      if ((param_2 >> ((byte)iVar6 & 0x1f) & 1) != 0) {
        iVar9 = (&DAT_3622b1c0)[iVar6];
        pvVar2 = AllocMemory(iVar9 * param_1);
        puVar8[0xc] = pvVar2;
        if (param_4 == 0x67) {
          *puVar8 = pvVar2;
        }
        local_24 = local_24 + iVar9 * param_1;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 < 0xc);
  }
  else if (iVar6 == 1) {
    local_1c = 8;
    if (param_4 == 0x69) {
      local_1c = 0x208;
    }
    local_14 = *(int **)(_pGfx + 0xa5c);
    puVar8 = (undefined4 *)(iVar4 + 0x30);
    iVar6 = 0;
    local_10 = puVar8;
    do {
      puVar8[0xc] = 0;
      *puVar8 = 0;
      puVar8[0x18] = 0;
      puVar8[-0xc] = 0;
      if ((param_2 >> ((byte)iVar6 & 0x1f) & 1) != 0) {
        iVar9 = (&DAT_3622b1c0)[iVar6] * param_1;
        if (param_4 == 0x67) {
          pvVar2 = AllocMemory(iVar9);
          *puVar8 = pvVar2;
        }
        iVar3 = (**(code **)(*local_14 + 0x5c))(local_14,iVar9,local_1c,0,0,puVar8 + 0xc);
        if (iVar3 != 0) {
          if (iVar6 < 0xc) {
            iVar6 = 0;
            puVar8 = local_10;
            do {
              if (((param_2 >> ((byte)iVar6 & 0x1f) & 1) != 0) && (puVar8[0xc] != 0)) {
                do {
                  iVar4 = (**(code **)(*(int *)puVar8[0xc] + 8))((int *)puVar8[0xc]);
                } while (0 < iVar4);
                puVar8[0xc] = 0;
                if ((void *)*puVar8 != (void *)0x0) {
                  FreeMemory((void *)*puVar8);
                  *puVar8 = 0;
                }
              }
              iVar6 = iVar6 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar6 < 0xc);
            local_4 = 0xffffffff;
            CDisableAsyncProgress::~CDisableAsyncProgress(local_18);
            ExceptionList = local_c;
            return 0;
          }
          break;
        }
        local_24 = local_24 + iVar9;
      }
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar6 < 0xc);
  }
  *(int *)(iVar4 + 0xc0) = local_24;
  *(uint *)(iVar4 + 200) = param_2;
  *(int *)(iVar4 + 0xc4) = param_1;
  *(undefined4 *)(iVar4 + 0xcc) = 0;
  *(int *)(iVar4 + 0xd0) = param_4;
  local_4 = 0xffffffff;
  CDisableAsyncProgress::~CDisableAsyncProgress(local_18);
  ExceptionList = local_c;
  return param_3;
}

