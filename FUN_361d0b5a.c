
undefined4 __thiscall FUN_361d0b5a(void *this,HANDLE param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  LPCVOID lpBuffer;
  uint uVar3;
  int iVar4;
  DWORD nNumberOfBytesToWrite;
  int *piVar5;
  int *piVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  uint local_98 [5];
  uint local_84;
  int local_80;
  int local_50 [8];
  uint local_30;
  byte local_2b;
  byte local_2a;
  undefined4 local_1c;
  int *local_18;
  uint local_14;
  DWORD local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 0;
  for (pvVar1 = this; pvVar1 != (void *)0x0; pvVar1 = *(void **)((int)pvVar1 + 0x4c)) {
    local_8 = local_8 + 1;
  }
  piVar5 = &DAT_362ac7d0;
  if (DAT_362ac7d0 != 0) {
    iVar4 = DAT_362ac7d0;
    do {
      if (iVar4 == *(int *)this) break;
      piVar5 = piVar5 + 9;
      iVar4 = *piVar5;
    } while (iVar4 != 0);
  }
  if (*piVar5 == 0) {
    uVar2 = 0x80004005;
  }
  else {
    local_18 = this;
    local_c = FUN_361c0ebe(*(int *)this);
    local_14 = (uint)local_c[2] >> 3;
    local_1c = 0x20534444;
    WriteFile(param_1,&local_1c,4,&local_10,(LPOVERLAPPED)0x0);
    puVar7 = local_98;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_98[2] = *(undefined4 *)((int)this + 0x10);
    local_98[3] = *(undefined4 *)((int)this + 0xc);
    uVar3 = piVar5[2];
    local_98[0] = 0x7c;
    local_98[1] = 0x1007;
    piVar8 = local_50;
    for (iVar4 = 8; piVar6 = local_18, piVar5 = piVar5 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar5;
      piVar8 = piVar8 + 1;
    }
    local_30 = 0x1000;
    if ((uVar3 & 3) != 0) {
      local_30 = 0x1002;
    }
    if ((uVar3 & 0x20) != 0) {
      local_30 = local_30 | 0x100;
    }
    if (local_18[0x13] != 0) {
      local_30 = local_30 | 0x400008;
      local_98[1] = 0x21007;
      local_80 = local_8;
    }
    if (local_18[0x14] != 0) {
      local_30 = local_30 | 8;
      local_2b = local_2b | 0xfe;
    }
    if (1 < (uint)local_18[5]) {
      local_98[1] = local_98[1] | 0x800000;
      local_2a = local_2a | 0x20;
      local_84 = local_18[5];
    }
    WriteFile(param_1,local_98,0x7c,&local_10,(LPOVERLAPPED)0x0);
    if (local_c[1] == 1) {
      WriteFile(param_1,(LPCVOID)piVar6[2],0x400,&local_10,(LPOVERLAPPED)0x0);
    }
    local_c = piVar6;
    do {
      for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[0x13]) {
        local_8 = 0;
        if (piVar6[5] != 0) {
          uVar3 = piVar6[4];
          do {
            uVar9 = 0;
            if (uVar3 != 0) {
              do {
                iVar4 = *local_18;
                if (iVar4 == 0x31545844) {
                  iVar4 = (piVar6[7] + uVar9 >> 2) * piVar6[0xc] +
                          (piVar6[10] + local_8) * piVar6[0xd] + ((uint)piVar6[6] >> 2) * 8;
                  nNumberOfBytesToWrite = (piVar6[3] + 3U >> 2) << 3;
LAB_361d0daa:
                  lpBuffer = (LPCVOID)(iVar4 + piVar6[1]);
                  uVar9 = uVar9 + 3;
                }
                else {
                  if (iVar4 == 0x32545844) {
LAB_361d0d4c:
                    iVar4 = (piVar6[7] + uVar9 >> 2) * piVar6[0xc] +
                            (piVar6[10] + local_8) * piVar6[0xd] + ((uint)piVar6[6] >> 2) * 0x10;
                    nNumberOfBytesToWrite = (piVar6[3] + 3U >> 2) << 4;
                    goto LAB_361d0daa;
                  }
                  if (iVar4 == 0x32595559) {
LAB_361d0d20:
                    lpBuffer = (LPCVOID)((piVar6[7] + uVar9) * piVar6[0xc] +
                                         (piVar6[10] + local_8) * piVar6[0xd] + piVar6[6] * local_14
                                        + piVar6[1]);
                    nNumberOfBytesToWrite = (piVar6[3] + 1U >> 1) << 2;
                  }
                  else {
                    if (((iVar4 == 0x33545844) || (iVar4 == 0x34545844)) || (iVar4 == 0x35545844))
                    goto LAB_361d0d4c;
                    if (iVar4 == 0x59565955) goto LAB_361d0d20;
                    lpBuffer = (LPCVOID)((piVar6[7] + uVar9) * piVar6[0xc] +
                                         (piVar6[10] + local_8) * piVar6[0xd] + piVar6[6] * local_14
                                        + piVar6[1]);
                    nNumberOfBytesToWrite = piVar6[3] * local_14;
                  }
                }
                WriteFile(param_1,lpBuffer,nNumberOfBytesToWrite,&local_10,(LPOVERLAPPED)0x0);
                uVar3 = piVar6[4];
                uVar9 = uVar9 + 1;
              } while (uVar9 < uVar3);
            }
            local_8 = local_8 + 1;
          } while (local_8 < (uint)piVar6[5]);
        }
      }
      piVar6 = (int *)local_c[0x14];
      local_c = piVar6;
    } while (piVar6 != (int *)0x0);
    uVar2 = 0;
  }
  return uVar2;
}

