
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_36171670(void)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  CTString *unaff_EBX;
  int iVar5;
  
  lVar2 = FUN_36026a90(0x3630085c);
  FUN_3603acc0(&DAT_3630087c,unaff_EBX,lVar2);
  iVar5 = DAT_36300864 + 1;
  DAT_36300864 = iVar5;
  iVar3 = FUN_36026b60((undefined4 *)&DAT_3630085c);
  if (iVar3 < iVar5) {
    iVar3 = FUN_36026b60((undefined4 *)&DAT_3630085c);
    FUN_36026e70(&DAT_3630085c,iVar3 + _DAT_36300868);
  }
  puVar1 = (undefined4 *)(DAT_36300860 + -4 + DAT_36300864 * 4);
  pcVar4 = StringDuplicate(*(char **)unaff_EBX);
  StringFree((char *)*puVar1);
  *puVar1 = pcVar4;
  if ((_pNetwork != (CNetworkLibrary *)0x0) && (*(int *)(_pNetwork + 0x14) != 0)) {
    CEntityMessage::WriteAddSkaString((CEntityMessage *)&DAT_362cf6f4,lVar2,unaff_EBX);
    CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
  }
  return lVar2;
}

