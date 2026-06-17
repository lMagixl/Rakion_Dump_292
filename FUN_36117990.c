
void __fastcall FUN_36117990(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int local_8;
  
  if ((*(int *)(param_1 + 0xd40) != 0) && (iVar1 = FUN_3611f3d0(0x362fcac4), iVar1 != 0)) {
    puVar5 = (undefined4 *)
             (*(int *)(param_1 + 0xe58) * *(int *)(param_1 + 0xd4c) + *(int *)(param_1 + 0xd48));
    local_8 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_3611fd00(&DAT_362fcac4,local_8);
        uVar4 = (*(int *)puVar2[1] + 0xffffU >> 0x10) - (*(int *)*puVar2 + 0xffffU >> 0x10);
        if (0 < (int)uVar4) {
          if ((*(int *)(puVar2[2] + 0xdc) < 0) &&
             (*(char *)(puVar2[2] + 0x100) == *(char *)(param_1 + 0xd5c))) {
            puVar2 = puVar5;
            for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar2 = 0xffffffff;
              puVar2 = puVar2 + 1;
            }
            for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar2 = 0xff;
              puVar2 = (undefined4 *)((int)puVar2 + 1);
            }
            *(undefined4 *)(param_1 + 0xd54) = 1;
          }
          else {
            puVar2 = puVar5;
            for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
              *puVar2 = 0;
              puVar2 = puVar2 + 1;
            }
            for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(undefined1 *)puVar2 = 0;
              puVar2 = (undefined4 *)((int)puVar2 + 1);
            }
            *(undefined4 *)(param_1 + 0xd58) = 1;
          }
          puVar5 = (undefined4 *)((int)puVar5 + uVar4);
        }
        local_8 = local_8 + 1;
      } while (local_8 < iVar1);
    }
  }
  return;
}

