
void FUN_36034220(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  CTStream *unaff_ESI;
  int iVar4;
  int local_8;
  undefined1 local_4;
  
  local_4 = DAT_362259a4;
  local_8 = DAT_362259a0;
  CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_8);
  local_8 = FUN_36035f90((undefined4 *)(in_EAX + 0x1c));
  **(int **)(unaff_ESI + 0x14) = local_8;
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 4;
  if (0 < local_8) {
    iVar4 = 0;
    do {
      puVar1 = *(undefined4 **)(unaff_ESI + 0x14);
      puVar3 = (undefined4 *)(*(int *)(in_EAX + 0x20) + iVar4);
      *puVar1 = *puVar3;
      puVar1[1] = puVar3[1];
      puVar1[2] = puVar3[2];
      iVar2 = *(int *)(unaff_ESI + 0x14);
      *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(iVar2 + 0xc) = puVar3[3];
      *(undefined4 *)(iVar2 + 0x10) = puVar3[4];
      *(undefined4 *)(iVar2 + 0x14) = puVar3[5];
      *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 0xc;
      operator<<(unaff_ESI,(CTString *)(puVar3 + 6));
      iVar4 = iVar4 + 0x20;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  local_4 = DAT_362259ac;
  local_8 = DAT_362259a8;
  CTStream::WriteID_t(unaff_ESI,(CChunkID *)&local_8);
  puVar1 = *(undefined4 **)(unaff_ESI + 0x14);
  *puVar1 = *(undefined4 *)(in_EAX + 0x9c);
  puVar1[1] = *(undefined4 *)(in_EAX + 0xa0);
  puVar1[2] = *(undefined4 *)(in_EAX + 0xa4);
  iVar4 = *(int *)(unaff_ESI + 0x14);
  *(undefined4 **)(unaff_ESI + 0x14) = (undefined4 *)(iVar4 + 0xc);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(in_EAX + 0xa8);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(in_EAX + 0xac);
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(in_EAX + 0xb0);
  *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x14) + 0xc;
  return;
}

