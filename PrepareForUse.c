
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: int __thiscall CCommunicationInterface::PrepareForUse(int,int) */

int __thiscall
CCommunicationInterface::PrepareForUse(CCommunicationInterface *this,int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  hostent *phVar5;
  char *pcVar6;
  uint uVar7;
  char *local_120;
  CCommunicationInterface *local_11c;
  char local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xfd0b0  2820  ?PrepareForUse@CCommunicationInterface@@QAEHHH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36217372;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed4;
  local_18 = DAT_362abd90;
  ExceptionList = &local_10;
  local_11c = this;
  FUN_360feba0((undefined4 *)&DAT_362cd110);
  FUN_360feba0((undefined4 *)&DAT_362cd128);
  if (DAT_362cd038 != 0) {
    Unprepare(this);
  }
  EndWinsock(this);
  if (param_1 != 0) {
    pcVar2 = Translate(s_ETRSInitializing_TCP_IP____36235640,4);
    CPrintF(pcVar2);
    if (param_2 == 0) {
      pcVar2 = s_ETRS_opening_as_server_36235678;
    }
    else {
      pcVar2 = s_ETRS_opening_as_client_3623565c;
    }
    pcVar2 = Translate(pcVar2,4);
    CPrintF(pcVar2);
    InitWinsock(this);
    DAT_362cd028 = 0;
    iVar3 = CTString::operator!=((CTString *)&DAT_362ccff8,&DAT_36235691);
    if (iVar3 != 0) {
      pcVar2 = DAT_362ccff8;
      pcVar4 = Translate(s_ETRS_user_forced_local_address____36235694,4);
      CPrintF(pcVar4,pcVar2);
      pcVar2 = StringDuplicate(DAT_362ccff8);
      StringFree(DAT_362cd144);
      DAT_362cd144 = pcVar2;
      DAT_362cd028 = StringToAddress((CTString *)&DAT_362cd144);
      if ((DAT_362cd028 == 0) || (DAT_362cd028 == 0xffffffff)) {
        DAT_362cd028 = 0;
        pcVar2 = Translate(s_ETRS_requested_local_address_is_i_362356bc,4);
        CPrintF(pcVar2);
      }
    }
    pcVar2 = Translate(s_ETRS_getting_local_addresses_362356e8,4);
    CPrintF(pcVar2);
    gethostname(local_118,0xff);
    pcVar2 = StringDuplicate(local_118);
    StringFree(DAT_362cd144);
    DAT_362cd144 = pcVar2;
    phVar5 = gethostbyname(pcVar2);
    if (phVar5 != (hostent *)0x0) {
      pcVar2 = StringDuplicate(&DAT_36235707);
      StringFree(DAT_362cd140);
      DAT_362cd140 = pcVar2;
      if (*phVar5->h_addr_list != (char *)0x0) {
        iVar3 = 0;
        do {
          if (0 < iVar3) {
            param_1 = (int)StringDuplicate(&DAT_36235708);
            local_8 = 0;
            CTString::operator+=((CTString *)&DAT_362cd140,(CTString *)&param_1);
            local_8 = 0xffffffff;
            StringFree((char *)param_1);
          }
          pcVar2 = inet_ntoa((in_addr)(*(_union_1226 **)(iVar3 + (int)phVar5->h_addr_list))->S_un_b)
          ;
          local_120 = StringDuplicate(pcVar2);
          local_8 = 1;
          CTString::operator+=((CTString *)&DAT_362cd140,(CTString *)&local_120);
          local_8 = 0xffffffff;
          StringFree(local_120);
          iVar1 = iVar3 + 4;
          iVar3 = iVar3 + 4;
          this = local_11c;
        } while (*(int *)(iVar1 + (int)phVar5->h_addr_list) != 0);
      }
    }
    pcVar2 = DAT_362cd144;
    pcVar4 = DAT_362cd140;
    pcVar6 = Translate(s_ETRS_local_addresses___s___s__3623570c,4);
    CPrintF(pcVar6,pcVar2,pcVar4);
    uVar7 = DAT_362a6088;
    pcVar2 = Translate(s_ETRS_port___d_3623572c,4);
    CPrintF(pcVar2,uVar7);
    local_8 = 2;
    OpenSocket_t(this,DAT_362cd028,(param_2 != 0) - 1 & DAT_362a6088);
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    FUN_360f1d80(&DAT_362cf150,0);
  }
  DAT_362cd038 = *(undefined4 *)(this + 0xc);
  ExceptionList = local_10;
  return 1;
}

