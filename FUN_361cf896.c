
undefined4 FUN_361cf896(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  code *local_278 [2];
  code *local_270;
  undefined1 local_1f4 [64];
  int local_1b4;
  undefined4 *local_1b0;
  undefined4 *local_1a0;
  undefined4 local_170;
  uint local_158;
  uint local_154;
  int local_14c;
  uint local_13c;
  int *local_c;
  undefined4 *local_8;
  
  local_1b4 = FUN_361de23f(local_278);
  local_278[0] = FUN_361cf834;
  local_270 = (code *)&DAT_361cf850;
  iVar2 = setjmp3(local_1f4,0);
  if (iVar2 == 0) {
    FUN_361dc237(&local_1b4,0x3d,0x1a8);
    local_1a0 = (undefined4 *)(*(code *)*local_1b0)(&local_1b4,0,0x24);
    local_1a0[8] = param_2;
    local_1a0[2] = &DAT_361cf86e;
    local_1a0[3] = &LAB_361cf86f;
    local_1a0[4] = &LAB_361cf884;
    local_1a0[5] = &LAB_361ddf98;
    local_1a0[6] = &DAT_361cf895;
    local_1a0[1] = 0;
    *local_1a0 = 0;
    local_1a0[7] = param_1;
    FUN_361dc682(&local_1b4,'\x01');
    iVar2 = FUN_361dae2b();
    if (iVar2 == 0) {
      local_170 = 1;
    }
    local_270 = FUN_361cf851;
    FUN_361dc986(&local_1b4);
    if (local_14c == 1) {
      *local_c = 0x32;
      local_c[0xc] = local_158;
    }
    else {
      if (local_14c != 3) goto LAB_361cf8e1;
      *local_c = 0x16;
      local_c[0xc] = local_158 << 2;
    }
    local_c[0xd] = 0;
    local_c[3] = local_158;
    local_c[4] = local_154;
    local_c[5] = 1;
    if (local_c[0x10] != 0) {
      local_c[0xe] = 1;
      iVar2 = FUN_361bf99c(local_c[0xc] * local_154);
      local_c[1] = iVar2;
      if ((iVar2 == 0) ||
         (local_8 = (undefined4 *)(*(code *)local_1b0[2])(&local_1b4,1,local_158 * local_14c,1),
         local_8 == (undefined4 *)0x0)) {
        uVar6 = 0x8007000e;
        goto LAB_361cfaf0;
      }
      if (*local_c == 0x32) {
        puVar5 = (undefined4 *)local_c[1];
        if (local_13c < local_154) {
          do {
            FUN_361dc78e(&local_1b4,local_8,1);
            puVar7 = (undefined4 *)*local_8;
            puVar9 = puVar5;
            for (uVar4 = local_158 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *puVar9 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar9 = puVar9 + 1;
            }
            for (uVar4 = local_158 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
              *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
              puVar7 = (undefined4 *)((int)puVar7 + 1);
              puVar9 = (undefined4 *)((int)puVar9 + 1);
            }
            puVar5 = (undefined4 *)((int)puVar5 + local_158);
          } while (local_13c < local_154);
        }
      }
      else if (*local_c == 0x16) {
        puVar8 = (uint *)local_c[1];
        while (local_13c < local_154) {
          FUN_361dc78e(&local_1b4,local_8,1);
          puVar3 = (undefined1 *)*local_8;
          puVar1 = puVar8 + local_158;
          for (; puVar8 < puVar1; puVar8 = puVar8 + 1) {
            *puVar8 = (uint)CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]);
            puVar3 = puVar3 + 3;
          }
        }
      }
      FUN_361dc5db(&local_1b4);
    }
    uVar6 = 0;
  }
  else {
LAB_361cf8e1:
    uVar6 = 0x80004005;
  }
LAB_361cfaf0:
  thunk_FUN_361e491a((int)&local_1b4);
  return uVar6;
}

