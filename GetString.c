
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: char * __thiscall CMD5::GetString(char const *,unsigned int) */

char * __thiscall CMD5::GetString(CMD5 *this,char *param_1,uint param_2)

{
  CMD5 CVar1;
  CMD5 *pCVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CMD5 *pCVar6;
  MD5_CTX local_5c [88];
  undefined4 local_4;
  
                    /* 0x19e2e0  2142  ?GetString@CMD5@@QAEPADPBDI@Z */
  local_4 = DAT_362abd90;
  MD5Init(this,local_5c);
  MD5Update(this,local_5c,(uchar *)param_1,param_2);
  MD5Final(this,(uchar *)(this + 4),local_5c);
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (CMD5)0x0;
  iVar5 = 0;
  do {
    sprintf((char *)&param_2,&DAT_36242ffc,(uint)(byte)(this + 4)[iVar5]);
    pCVar2 = (CMD5 *)&param_2;
    do {
      CVar1 = *pCVar2;
      pCVar2 = pCVar2 + 1;
    } while (CVar1 != (CMD5)0x0);
    uVar3 = (int)pCVar2 - (int)&param_2;
    pCVar2 = this + 0x13;
    do {
      pCVar6 = pCVar2 + 1;
      pCVar2 = pCVar2 + 1;
    } while (*pCVar6 != (CMD5)0x0);
    pCVar6 = (CMD5 *)&param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pCVar2 = *(undefined4 *)pCVar6;
      pCVar6 = pCVar6 + 4;
      pCVar2 = pCVar2 + 4;
    }
    iVar5 = iVar5 + 1;
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pCVar2 = *pCVar6;
      pCVar6 = pCVar6 + 1;
      pCVar2 = pCVar2 + 1;
    }
  } while (iVar5 < 0x10);
  return (char *)(this + 0x14);
}

