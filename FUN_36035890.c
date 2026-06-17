
void __cdecl FUN_36035890(char *param_1)

{
  undefined4 *this;
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  undefined4 *puVar6;
  CTStream *unaff_ESI;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_1b;
  undefined1 local_17;
  undefined4 local_16;
  undefined1 local_12;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ff8b;
  local_c = ExceptionList;
  local_24 = DAT_36225a54;
  local_28 = DAT_36225a50;
  ExceptionList = &local_c;
  CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_28);
  pcVar1 = param_1;
  local_30 = **(int **)(unaff_ESI + 0x14);
  *(int **)(unaff_ESI + 0x14) = *(int **)(unaff_ESI + 0x14) + 1;
  if ((0 < local_30) && (FUN_36036c60(param_1 + 0xbc,local_30), 0 < local_30)) {
    local_38 = 0;
    do {
      local_1c = DAT_36225a5c;
      puVar6 = (undefined4 *)(*(int *)(pcVar1 + 0xc0) + local_38);
      local_20 = DAT_36225a58;
      CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_20);
      *puVar6 = **(undefined4 **)(unaff_ESI + 0x14);
      iVar2 = *(int *)(unaff_ESI + 0x14);
      *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar2 + 4);
      puVar6[1] = *(undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(unaff_ESI + 0x14);
      piVar5 = (int *)(iVar2 + 4);
      *(int **)(unaff_ESI + 0x14) = piVar5;
      local_34 = *piVar5;
      *(int *)(unaff_ESI + 0x14) = iVar2 + 8;
      if (0 < local_34) {
        this = puVar6 + 2;
        puVar6[4] = puVar6[4] + local_34;
        iVar2 = FUN_36036080(this);
        if (iVar2 < (int)puVar6[4]) {
          iVar2 = puVar6[5];
          local_28 = (local_34 + -1) / iVar2 + 1;
          iVar3 = FUN_36036080(this);
          FUN_36036480(this,iVar3 + iVar2 * local_28);
        }
        if (0 < local_34) {
          local_3c = 0;
          do {
            iVar3 = puVar6[3] + local_3c;
            local_1b = DAT_36225a60;
            local_17 = DAT_36225a64;
            CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_1b);
            *(undefined4 *)(iVar3 + 8) = **(undefined4 **)(unaff_ESI + 0x14);
            iVar2 = *(int *)(unaff_ESI + 0x14);
            *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar2 + 4);
            *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar2 + 4);
            iVar2 = *(int *)(unaff_ESI + 0x14);
            *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar2 + 4);
            *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar2 + 4);
            iVar2 = *(int *)(unaff_ESI + 0x14);
            *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar2 + 4);
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar2 + 4);
            *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
            param_1 = StringDuplicate(&DAT_36222fa0);
            local_4 = 0;
            operator>>(unaff_ESI,(CTString *)&param_1);
            lVar4 = ska_StringToID((CTString *)&param_1);
            *(long *)(iVar3 + 0x10) = lVar4;
            iVar2 = DAT_36225a68;
            local_24 = DAT_36225a6c;
            piVar5 = (int *)CTStream::PeekID_t(unaff_ESI);
            if (*piVar5 == iVar2) {
              local_16 = DAT_36225a70;
              local_12 = DAT_36225a74;
              CTStream::ExpectID_t(unaff_ESI,(CChunkID *)&local_16);
              *(undefined4 *)(iVar3 + 0xc) = **(undefined4 **)(unaff_ESI + 0x14);
              *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
            }
            local_4 = 0xffffffff;
            StringFree(param_1);
            local_3c = local_3c + 0x20;
            local_34 = local_34 + -1;
          } while (local_34 != 0);
        }
      }
      local_38 = local_38 + 0x18;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  ExceptionList = local_c;
  return;
}

