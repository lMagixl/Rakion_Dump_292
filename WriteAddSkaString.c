
/* public: void __thiscall CEntityMessage::WriteAddSkaString(long,class CTString const &) */

void __thiscall
CEntityMessage::WriteAddSkaString(CEntityMessage *this,long param_1,CTString *param_2)

{
  CNetworkMessage *this_00;
  char cVar1;
  char cVar2;
  CTString *pCVar3;
  byte bVar4;
  char *pcVar5;
  
                    /* 0x102120  3954  ?WriteAddSkaString@CEntityMessage@@QAEXJABVCTString@@@Z */
  pCVar3 = param_2;
  pcVar5 = *(char **)param_2;
  cVar2 = (char)pcVar5;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  bVar4 = ((char)pcVar5 - (cVar2 + '\x01')) + 1;
  this_00 = (CNetworkMessage *)(this + 4);
  param_2 = (CTString *)CONCAT31(param_2._1_3_,bVar4);
  CNetworkMessage::Reinit(this_00);
  *(undefined4 *)this = 0x11;
  *(ushort *)(this + 0x1c) = bVar4 + 1;
  *(long *)(this + 0x20) = param_1;
  CNetworkMessage::Write(this_00,&param_2,1);
  CNetworkMessage::Write(this_00,*(void **)pCVar3,(uint)param_2 & 0xff);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__String___s__added_to_ska_36236154,*(undefined4 *)pCVar3,param_1);
  }
  return;
}

