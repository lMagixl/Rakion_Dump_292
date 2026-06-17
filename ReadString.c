
/* public: void __thiscall CNetMessage::ReadString(char *) */

void __thiscall CNetMessage::ReadString(CNetMessage *this,char *param_1)

{
  int iVar1;
  
                    /* 0x105a40  2996  ?ReadString@CNetMessage@@QAEXPAD@Z */
  lstrcpyA(param_1,(LPCSTR)(this + *(ushort *)(this + 0x3ec) + 2));
  iVar1 = lstrlenA((LPCSTR)(this + *(ushort *)(this + 0x3ec) + 2));
  *(short *)(this + 0x3ec) = *(short *)(this + 0x3ec) + (short)iVar1 + 1;
  return;
}

