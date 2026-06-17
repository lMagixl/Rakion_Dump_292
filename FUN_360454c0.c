
uint __fastcall FUN_360454c0(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  uint _C;
  char *pcVar4;
  
  do {
    while( true ) {
      pbVar1 = *(byte **)(param_1 + 0x14);
      bVar3 = *pbVar1;
      *(byte **)(param_1 + 0x14) = pbVar1 + 1;
      if (bVar3 != 10) break;
      DAT_362bf210 = DAT_362bf210 + 1;
    }
  } while (bVar3 == 0xd);
  if (bVar3 == 0x5c) {
    bVar3 = pbVar1[1];
    _C = (uint)bVar3;
    *(byte **)(param_1 + 0x14) = pbVar1 + 2;
    switch(_C) {
    case 0x24:
      return 0xffffffff;
    case 0x30:
      return 0;
    case 0x3c:
      return 0xfffffffe;
    case 0x3e:
      return 0xfffffffd;
    case 0x5c:
      return 0x5c;
    case 0x6e:
      return 10;
    }
    iVar2 = isprint(_C);
    if (iVar2 == 0) {
      pcVar4 = s_ETRS_d__unknown_token_ascii__0x__3622774c;
    }
    else {
      pcVar4 = s_I_ETRS_d__unknown_token___c__3622772e + 2;
    }
    iVar2 = DAT_362bf210;
    pcVar4 = Translate(pcVar4,4);
    ThrowF_t(pcVar4,iVar2,_C);
  }
  return (uint)bVar3;
}

