
/* public: void __thiscall CWorld::WriteInfo_t(class CTStream *) */

void __thiscall CWorld::WriteInfo_t(CWorld *this,CTStream *param_1)

{
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0xd8a80  3970  ?WriteInfo_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_1 = DAT_362327cc;
  local_5 = DAT_362327c8;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_5);
  local_1 = DAT_362327d4;
  local_5 = DAT_362327d0;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_5);
  ::operator<<(param_1,(CTString *)(this + 0x124));
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(this + 0x128);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  ::operator<<(param_1,(CTString *)(this + 300));
  return;
}

