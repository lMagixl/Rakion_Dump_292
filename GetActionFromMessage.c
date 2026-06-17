
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CPlayerAction __thiscall CSessionState::GetActionFromMessage(class
   CNetMessage,unsigned char &) */

void __thiscall CSessionState::GetActionFromMessage(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  byte *in_stack_000003f8;
  byte local_6f;
  byte local_6e;
  char local_6d;
  ushort local_6c [2];
  short local_68 [2];
  short local_64 [2];
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48 [2];
  undefined8 local_40;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_18;
  float local_10;
  float local_c;
  float local_8;
  byte local_4;
  
                    /* 0x10fcb0  1695
                       ?GetActionFromMessage@CSessionState@@QAE?AVCPlayerAction@@VCNetMessage@@AAE@Z
                        */
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_6c,2);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,&local_6f,1);
  *in_stack_000003f8 = local_6f & 0x1f;
  CNetMessage::Read((CNetMessage *)&stack0x00000008,&local_6e,1);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_64,2);
  UnpackFloatToSWord(local_64[0],&local_60);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_64,2);
  UnpackFloatToSWord(local_64[0],&local_5c);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_64,2);
  UnpackFloatToSWord(local_64[0],&local_58);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_68,2);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,&local_6d,1);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_64,2);
  UnpackFloatToSWord(local_64[0],&local_54);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_64,2);
  UnpackFloatToSWord(local_64[0],&local_50);
  CNetMessage::Read((CNetMessage *)&stack0x00000008,local_64,2);
  UnpackFloatToSWord(local_64[0],&local_4c);
  CPlayerAction::CPlayerAction((CPlayerAction *)local_48);
  local_40 = _DAT_36227d98;
  local_34 = local_60;
  local_30 = local_5c;
  local_48[0] = (uint)local_6c[0];
  local_28 = (float)(int)local_68[0];
  local_c = local_50;
  local_38 = (uint)local_6e;
  local_2c = local_58;
  local_18 = (float)(int)(short)local_6d;
  local_8 = local_4c;
  local_4 = local_6f >> 5 & 3;
  local_10 = local_54;
  puVar2 = local_48;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

