
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* protected: void __thiscall CMD5::MD5Final(unsigned char *,struct CMD5::MD5_CTX *) */

void __thiscall CMD5::MD5Final(CMD5 *this,uchar *param_1,MD5_CTX *param_2)

{
  uint uVar1;
  int iVar2;
  uchar local_c [8];
  undefined4 local_4;
  
                    /* 0x19e250  2573  ?MD5Final@CMD5@@IAEXPAEPAUMD5_CTX@1@@Z */
  local_4 = DAT_362abd90;
  FUN_3619d850((int)local_c,8);
  uVar1 = *(uint *)(param_2 + 0x10) >> 3 & 0x3f;
  iVar2 = 0x38;
  if (0x37 < uVar1) {
    iVar2 = 0x78;
  }
  MD5Update(this,param_2,&DAT_362a80b8,iVar2 - uVar1);
  MD5Update(this,param_2,local_c,8);
  FUN_3619d850((int)param_1,0x10);
  for (iVar2 = 0x16; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)param_2 = 0;
    param_2 = param_2 + 4;
  }
  return;
}

