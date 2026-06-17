
/* public: void __thiscall CNetworkLibrary::WriteVersion_t(class CTStream &) */

void __thiscall CNetworkLibrary::WriteVersion_t(CNetworkLibrary *this,CTStream *param_1)

{
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0xf4cf0  3999  ?WriteVersion_t@CNetworkLibrary@@QAEXAAVCTStream@@@Z */
  local_1 = DAT_36234f70;
  local_5 = DAT_36234f6c;
  CTStream::WriteID_t(param_1,(CChunkID *)&local_5);
  **(undefined4 **)(param_1 + 0x14) = 10000;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  return;
}

