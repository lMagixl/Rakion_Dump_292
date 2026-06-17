
void __fastcall FUN_361760f0(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char local_c [4];
  int *local_8;
  
  iVar5 = *(int *)(param_2 + 0x104);
  iVar2 = in_EAX * 0x160 + iVar5;
  iVar6 = *(int *)(iVar2 + 0xc);
  iVar3 = *(int *)(param_2 + 0x54) >> ((byte)iVar6 & 0x1f);
  local_8 = (int *)(iVar2 + 0x18);
  local_c[0] = '\0';
  iVar4 = iVar3 + 1;
  local_c[1] = '\0';
  local_c[2] = '\0';
  local_c[3] = '\0';
  iVar7 = 0;
  do {
    if (-1 < *local_8) {
      iVar1 = *(int *)(*local_8 * 0x160 + 0xc + iVar5);
      if (iVar1 < iVar6) {
        local_c[iVar7] = '\t';
      }
      else if (iVar1 == iVar6) {
        local_c[iVar7] = (char)iVar7 + '\x05';
      }
    }
    iVar7 = iVar7 + 1;
    local_8 = local_8 + 1;
  } while (iVar7 < 4);
  if ((local_c[2] != '\0') && (iVar5 = 1, 1 < iVar4)) {
    do {
      *(char *)(*(int *)(iVar2 + 0x128) + 2 + iVar5 * 8) = local_c[2];
      iVar5 = iVar5 + 2;
    } while (iVar5 < iVar4);
  }
  if ((local_c[3] != '\0') && (1 < iVar4)) {
    iVar5 = (iVar4 * iVar4 - iVar4) * 8 + 8;
    iVar6 = (iVar3 - 1U >> 1) + 1;
    do {
      *(char *)(*(int *)(iVar2 + 0x128) + 2 + iVar5) = local_c[3];
      iVar5 = iVar5 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((local_c[0] != '\0') && (1 < iVar4)) {
    iVar5 = iVar4 * 8;
    iVar6 = (iVar3 - 1U >> 1) + 1;
    do {
      *(char *)(*(int *)(iVar2 + 0x128) + 2 + iVar5) = local_c[0];
      iVar5 = iVar5 + iVar4 * 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((local_c[1] != '\0') && (1 < iVar4)) {
    iVar6 = (iVar3 - 1U >> 1) + 1;
    iVar5 = iVar4 * 0x10;
    do {
      *(char *)(*(int *)(iVar2 + 0x128) + -6 + iVar5) = local_c[1];
      iVar5 = iVar5 + iVar4 * 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

