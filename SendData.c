
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: int __thiscall CNet::SendData(int const &,unsigned short const &,unsigned char const
   &,unsigned char const &,class CNetMessage &) */

int __thiscall
CNet::SendData(CNet *this,int *param_1,ushort *param_2,uchar *param_3,uchar *param_4,
              CNetMessage *param_5)

{
  uchar *puVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  uchar *puVar5;
  void *pvStack_24;
  void *pvStack_20;
  ulong uStack_1c;
  uchar auStack_18 [8];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = param_4;
                    /* 0x104b00  3266  ?SendData@CNet@@AAEHABHABGABE2AAVCNetMessage@@@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_362177a6;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &pvStack_c;
  if ((*param_4 < 0x14) &&
     (ExceptionList = &pvStack_c, iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))(),
     *(int *)(iVar2 + 0x1d8 + (uint)*puVar1 * 0x37c) == 1)) {
    GetRelayHeader(this,puVar1,auStack_18);
    pvStack_20 = (void *)FUN_361bf99c(0x414);
    uStack_4 = 0;
    if (pvStack_20 == (void *)0x0) {
      puVar3 = (ushort *)0x0;
      uVar4 = *(ulong *)(this + 0x30);
      puVar5 = (uchar *)(uint)*(ushort *)(this + 0x36);
    }
    else {
      pvStack_24 = *(void **)(this + 4);
      *(int *)(this + 4) = (int)pvStack_24 + 1;
      puVar3 = (ushort *)
               FUN_36105c40(pvStack_20,param_1,param_2,&pvStack_24,param_3,param_5,
                            (undefined4 *)(this + 0x30),(undefined2 *)(this + 0x36),
                            (undefined4 *)auStack_18);
      uVar4 = *(ulong *)(this + 0x30);
      puVar5 = (uchar *)(uint)*(ushort *)(this + 0x36);
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    uStack_1c = *(ulong *)(iVar2 + 0x1e8 + (uint)*puVar1 * 0x37c);
    iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    param_4 = (uchar *)(uint)*(ushort *)(iVar2 + 0x1ec + (uint)*puVar1 * 0x37c);
    pvStack_24 = (void *)FUN_361bf99c(0x414);
    uStack_4 = 1;
    if (pvStack_24 == (void *)0x0) {
      puVar3 = (ushort *)0x0;
      uVar4 = uStack_1c;
      puVar5 = param_4;
    }
    else {
      pvStack_20 = *(void **)(this + 4);
      *(int *)(this + 4) = (int)pvStack_20 + 1;
      puVar3 = FUN_36105ba0(pvStack_24,param_1,param_2,&pvStack_20,param_3,param_5,&uStack_1c,
                            (ushort *)&param_4);
      uVar4 = uStack_1c;
      puVar5 = param_4;
    }
  }
  uStack_4 = 0xffffffff;
  iVar2 = SendTo(this,(char *)puVar3,puVar3[0x1fc],uVar4,(ushort)puVar5);
  if (iVar2 == 0) {
    operator_delete(puVar3);
    iVar2 = 0;
  }
  else {
    if (*param_1 == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
      FUN_36105de0((void *)(*(int *)(this + 0xc) + (uint)*puVar1 * 8),puVar3);
      LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
    }
    else {
      operator_delete(puVar3);
    }
    iVar2 = 1;
  }
  ExceptionList = pvStack_c;
  return iVar2;
}

