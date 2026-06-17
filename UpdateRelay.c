
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CNet::UpdateRelay(void) */

void __thiscall CNet::UpdateRelay(CNet *this)

{
  char *pcVar1;
  int iVar2;
  uchar local_416 [2];
  int local_414;
  int local_410;
  void *local_40c;
  uchar local_408 [8];
  CNetMessage local_400 [1008];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x104900  3921  ?UpdateRelay@CNet@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621776e;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_416[0] = 0xfe;
  ExceptionList = &local_c;
  GetRelayHeader(this,local_416,local_408);
  CNetMessage::CNetMessage(local_400);
  local_40c = (void *)FUN_361bf99c(0x414);
  local_4 = 0;
  if (local_40c == (void *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    local_410 = *(int *)(this + 4);
    *(int *)(this + 4) = local_410 + 1;
    local_416[1] = 0;
    local_414 = 0;
    pcVar1 = (char *)FUN_36105c40(local_40c,&local_414,(ushort *)&DAT_36236434,&local_410,
                                  local_416 + 1,local_400,(undefined4 *)(this + 0x30),
                                  (undefined2 *)(this + 0x36),(undefined4 *)local_408);
  }
  iVar2 = SendTo(this,pcVar1,*(ushort *)(pcVar1 + 0x3f8),*(ulong *)(this + 0x30),
                 *(ushort *)(this + 0x36));
  if (iVar2 == 0) {
    operator_delete(pcVar1);
  }
  ExceptionList = local_c;
  return;
}

