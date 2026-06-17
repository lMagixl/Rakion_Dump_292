
/* public: int __thiscall CNet::SendData_Unreliable(unsigned short const &,unsigned char const
   &,class CNetMessage &,unsigned long const &,unsigned short const &) */

int __thiscall
CNet::SendData_Unreliable
          (CNet *this,ushort *param_1,uchar *param_2,CNetMessage *param_3,ulong *param_4,
          ushort *param_5)

{
  int iVar1;
  ushort *puVar2;
  int local_18 [2];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x104d40  3269  ?SendData_Unreliable@CNet@@QAEHABGABEAAVCNetMessage@@ABK0@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362177bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = (void *)FUN_361bf99c(0x414);
  puVar2 = (ushort *)0x0;
  local_4 = 0;
  if (local_10 != (void *)0x0) {
    local_18[0] = *(int *)(this + 4);
    *(int *)(this + 4) = local_18[0] + 1;
    local_18[1] = 0;
    puVar2 = FUN_36105ba0(local_10,local_18 + 1,param_1,local_18,param_2,param_3,param_4,param_5);
  }
  iVar1 = SendTo(this,(char *)puVar2,puVar2[0x1fc],*param_4,*param_5);
  if (iVar1 == 0) {
    operator_delete(puVar2);
    ExceptionList = local_c;
    return 0;
  }
  operator_delete(puVar2);
  ExceptionList = local_c;
  return 1;
}

