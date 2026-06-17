
void __cdecl FUN_360347f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  CTStream *unaff_ESI;
  int iVar3;
  int local_34;
  char *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20;
  undefined4 local_1b;
  undefined1 local_17;
  undefined4 local_16;
  undefined1 local_12;
  undefined4 local_11;
  undefined1 local_d;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620feab;
  local_c = ExceptionList;
  local_20 = DAT_362259b4;
  local_24 = DAT_362259b0;
  ExceptionList = &local_c;
  CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_24);
  iVar3 = param_1 + 0xbc;
  local_24 = iVar3;
  local_28 = FUN_36035f40(iVar3);
  **(int **)(unaff_ESI + 0x14) = local_28;
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
  if (0 < local_28) {
    local_34 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(iVar3 + 4) + local_34);
      local_1b = DAT_362259b8;
      local_17 = DAT_362259bc;
      CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_1b);
      **(undefined4 **)(unaff_ESI + 0x14) = *puVar2;
      iVar3 = *(int *)(unaff_ESI + 0x14);
      *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar3 + 4) = puVar2[1];
      iVar3 = *(int *)(unaff_ESI + 0x14);
      *(int **)(unaff_ESI + 0x14) = (int *)(iVar3 + 4);
      iVar1 = FUN_36035f50((int)(puVar2 + 2));
      *(int *)(iVar3 + 4) = iVar1;
      *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
      if (0 < iVar1) {
        param_1 = 0;
        local_2c = iVar1;
        do {
          iVar1 = puVar2[3] + param_1;
          local_16 = DAT_362259c0;
          local_12 = DAT_362259c4;
          CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_16);
          **(undefined4 **)(unaff_ESI + 0x14) = *(undefined4 *)(iVar1 + 8);
          iVar3 = *(int *)(unaff_ESI + 0x14);
          *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar3 + 4);
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 0x14);
          iVar3 = *(int *)(unaff_ESI + 0x14);
          *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar3 + 4);
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 0x18);
          iVar3 = *(int *)(unaff_ESI + 0x14);
          *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar3 + 4);
          *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar1 + 0x1c);
          *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
          ska_IDToString((long)&local_30);
          local_4 = 0;
          operator<<(unaff_ESI,(CTString *)&local_30);
          local_11 = DAT_362259c8;
          local_d = DAT_362259cc;
          CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_11);
          **(undefined4 **)(unaff_ESI + 0x14) = *(undefined4 *)(iVar1 + 0xc);
          *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
          local_4 = 0xffffffff;
          StringFree(local_30);
          param_1 = param_1 + 0x20;
          local_2c = local_2c + -1;
        } while (local_2c != 0);
      }
      local_34 = local_34 + 0x18;
      local_28 = local_28 + -1;
      iVar3 = local_24;
    } while (local_28 != 0);
  }
  ExceptionList = local_c;
  return;
}

