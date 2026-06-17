
/* public: void __thiscall CWorld::LoadBrushes_t(class CTFileName const &) */

void __thiscall CWorld::LoadBrushes_t(CWorld *this,CTFileName *param_1)

{
  char *pcVar1;
  int local_8c;
  undefined4 local_85;
  undefined1 local_81;
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd9a30  2545  ?LoadBrushes_t@CWorld@@QAEXABVCTFileName@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621518c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(*(char **)param_1);
  StringFree(*(char **)(this + 0x118));
  *(char **)(this + 0x118) = pcVar1;
  *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 4);
  CTFileStream::CTFileStream(local_80);
  local_4 = 0;
  CTFileStream::Open_t(local_80,param_1,1);
  CNetworkLibrary::CheckVersion_t(_pNetwork,(CTStream *)local_80,0,&local_8c);
  local_85 = DAT_36232384;
  local_81 = DAT_36232388;
  CTStream::ExpectID_t((CTStream *)local_80,(CChunkID *)&local_85);
  ReadBrushes_t(this,(CTStream *)local_80);
  local_4 = 0xffffffff;
  CTFileStream::~CTFileStream(local_80);
  ExceptionList = local_c;
  return;
}

