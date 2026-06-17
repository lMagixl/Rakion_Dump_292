
/* public: void __thiscall CWorld::ReadInfo_t(class CTStream *,int) */

void __thiscall CWorld::ReadInfo_t(CWorld *this,CTStream *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_5;
  undefined1 local_1;
  
                    /* 0xd8990  2966  ?ReadInfo_t@CWorld@@QAEXPAVCTStream@@H@Z */
  iVar1 = DAT_362327a8;
  local_1 = DAT_362327ac;
  piVar2 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar2 == iVar1) {
    local_5 = DAT_362327b0;
    local_1 = DAT_362327b4;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    iVar1 = DAT_362327b8;
    local_1 = DAT_362327bc;
    piVar2 = (int *)CTStream::PeekID_t(param_1);
    if (*piVar2 == iVar1) {
      local_5 = DAT_362327c0;
      local_1 = DAT_362327c4;
      CTStream::ExpectID_t(param_1,(CChunkID *)&local_5);
    }
    ::operator>>(param_1,(CTString *)(this + 0x124));
    *(undefined4 *)(this + 0x128) = **(undefined4 **)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    ::operator>>(param_1,(CTString *)(this + 300));
    return;
  }
  if (param_2 != 0) {
    ::operator>>(param_1,(CTString *)(this + 300));
  }
  return;
}

