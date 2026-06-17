
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36028210(void)

{
  byte bVar1;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  DWORD local_118;
  DWORD local_114;
  _COMSTAT local_110;
  byte local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  DAT_362ba310 = 0;
  DAT_362ba30c = 0;
  if (DAT_362ba340 != (HANDLE)0x0) {
    ClearCommError(DAT_362ba340,&local_114,&local_110);
    if ((int)local_110.cbInQue < 0x100) {
      local_118 = local_110.cbInQue;
      if (local_110.cbInQue == 0) {
        return;
      }
    }
    else {
      local_118 = 0x100;
    }
    iVar4 = 999;
    while (BVar2 = ReadFile(DAT_362ba340,local_104,local_118,&local_118,(LPOVERLAPPED)0x0),
          BVar2 == 0) {
      iVar4 = iVar4 + -1;
      if (iVar4 < 1) {
        return;
      }
    }
    if (0 < iVar4) {
      local_114 = 0;
      uVar3 = DAT_362ba348;
      if (local_118 != 0) {
        do {
          bVar1 = local_104[local_114];
          if ((bVar1 & 0x40) == 0) {
            if (DAT_362ba344 < 4) goto LAB_36028305;
          }
          else {
            DAT_362ba344 = 0;
LAB_36028305:
            *(byte *)((int)&DAT_362ba348 + DAT_362ba344) = bVar1;
            uVar3 = DAT_362ba348;
          }
          DAT_362ba344 = DAT_362ba344 + 1;
          if (DAT_362ba344 == 1) {
            _DAT_362ba308 = _DAT_362ba308 ^ ((uVar3 & 0xff) >> 4 ^ _DAT_362ba308) & 3;
          }
          else if (DAT_362ba344 == 3) {
            DAT_362ba310 = DAT_362ba310 + (char)((byte)uVar3 * '@' + (char)(uVar3 >> 8));
            DAT_362ba30c = DAT_362ba30c + (char)(((byte)uVar3 & 0xfc) * '\x10' + DAT_362ba348._2_1_)
            ;
          }
          else if ((DAT_362ba344 == 4) &&
                  (_DAT_362ba308 = _DAT_362ba308 & 0xfffffffb, (bVar1 & 0x20) != 0)) {
            _DAT_362ba308 = _DAT_362ba308 | 4;
          }
          local_114 = local_114 + 1;
        } while (local_114 < local_118);
      }
      if (DAT_362a1b88 != 0) {
        if ((DAT_362ba310 != 0) || (DAT_362ba30c != 0)) {
          DAT_362a1b88 = 0;
        }
        DAT_362ba310 = 0;
        DAT_362ba30c = 0;
        _DAT_362ba308 = 0;
      }
    }
  }
  return;
}

