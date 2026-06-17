
/* public: void __thiscall CNetMessage::WriteString(char * const) */

void __thiscall CNetMessage::WriteString(CNetMessage *this,char *param_1)

{
  int iVar1;
  
                    /* 0x105a80  3997  ?WriteString@CNetMessage@@QAEXQAD@Z */
  lstrcpyA((LPSTR)(this + *(ushort *)(this + 0x3ea) + 2),param_1);
  iVar1 = lstrlenA(param_1);
  *(short *)(this + 0x3ea) = *(short *)(this + 0x3ea) + (short)iVar1 + 1;
  return;
}

