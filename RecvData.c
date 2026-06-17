
/* public: int __thiscall CNet::RecvData(int &,unsigned short &,unsigned long &,unsigned char
   &,class CNetMessage &,unsigned long &,unsigned short &,int &) */

int __thiscall
CNet::RecvData(CNet *this,int *param_1,ushort *param_2,ulong *param_3,uchar *param_4,
              CNetMessage *param_5,ulong *param_6,ushort *param_7,int *param_8)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uchar uVar1;
  ushort uVar2;
  undefined2 *this_00;
  ulong uVar3;
  
                    /* 0x1046c0  3071  ?RecvData@CNet@@QAEHAAHAAGAAKAAEAAVCNetMessage@@210@Z */
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x14);
  EnterCriticalSection(lpCriticalSection);
  this_00 = (undefined2 *)FUN_36105e30(*(int **)(this + 8));
  if (this_00 == (undefined2 *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  *param_1 = *(int *)(this_00 + 0x1fe);
  uVar2 = FUN_36105cf0(this_00);
  *param_2 = uVar2;
  uVar3 = FUN_36105d00((int)this_00);
  *param_3 = uVar3;
  uVar1 = FUN_36105d10((int)this_00);
  *param_4 = uVar1;
  FUN_36105d20(this_00,param_5);
  *param_6 = *(ulong *)(this_00 + 0x200);
  *param_7 = this_00[0x202];
  *param_8 = *(int *)(this_00 + 0x204);
  FUN_36105e60(*(undefined4 **)(this + 8));
  LeaveCriticalSection(lpCriticalSection);
  return 1;
}

